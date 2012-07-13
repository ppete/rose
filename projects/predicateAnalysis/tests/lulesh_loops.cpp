

//
// message receive

  for (Index_t i=0; i<26; ++i) {
      domain->recvRequest[i] = MPI_REQUEST_NULL ;
  }

  if (planeMin && doRecv) {
      /* contiguous memory */
      int fromProc = myRank - domain->tp*domain->tp ;
      int recvCount = dx * dy * xferFields ;
      MPI_Irecv(&domain->commDataRecv[pmsg * maxPlaneComm],
                recvCount, baseType, fromProc, msgType,
                MPI_COMM_WORLD, &domain->recvRequest[pmsg]) ;
      ++pmsg ;
   }
   if (planeMax) {
      /* contiguous memory */
      int fromProc = myRank + domain->tp*domain->tp ;
      int recvCount = dx * dy * xferFields ;
      MPI_Irecv(&domain->commDataRecv[pmsg * maxPlaneComm],
                recvCount, baseType, fromProc, msgType,
                MPI_COMM_WORLD, &domain->recvRequest[pmsg]) ;
      ++pmsg ;
   }


void CommSend(Domain *domain, int msgType,
              Index_t xferFields, Real_t **fieldData,
              Index_t dx, Index_t dy, Index_t dz, bool doSend, bool planeOnly)
{

   if (domain->numProcs == 1) return ;

   /* post recieve buffers for all incoming messages */
   int myRank ;
   Index_t maxPlaneComm = xferFields * domain->maxPlaneSize ;
   Index_t maxEdgeComm  = xferFields * domain->maxEdgeSize ;
   Index_t pmsg = 0 ; /* plane comm msg */
   Index_t emsg = 0 ; /* edge comm msg */
   Index_t cmsg = 0 ; /* corner comm msg */
   MPI_Datatype baseType = ((sizeof(Real_t) == 4) ? MPI_FLOAT : MPI_DOUBLE) ;
   MPI_Status status[26] ;
   Real_t *destAddr ;
   bool rowMin, rowMax, colMin, colMax, planeMin, planeMax ;
   bool packable ;
   /* assume communication to 6 neighbors by default */
   rowMin = rowMax = colMin = colMax = planeMin = planeMax = true ;
   if (domain->rowLoc == 0) {
      rowMin = false ;
   }
   if (domain->rowLoc == (domain->tp-1)) {
      rowMax = false ;
   }
   if (domain->colLoc == 0) {
      colMin = false ;
   }
   if (domain->colLoc == (domain->tp-1)) {
      colMax = false ;
   }
   if (domain->planeLoc == 0) {
      planeMin = false ;
   }
   if (domain->planeLoc == (domain->tp-1)) {
      planeMax = false ;
   }

   packable = true ;
   for (Index_t i=0; i<xferFields-2; ++i) {
     if((fieldData[i+1] - fieldData[i]) != (fieldData[i+2] - fieldData[i+1])) {
        packable = false ;
        break ;
     }
   }
   for (Index_t i=0; i<26; ++i) {
      domain->sendRequest[i] = MPI_REQUEST_NULL ;
   }

   MPI_Comm_rank(MPI_COMM_WORLD, &myRank) ;

   /* post sends */

   if (planeMin | planeMax) {
      /* ASSUMING ONE DOMAIN PER RANK, CONSTANT BLOCK SIZE HERE */
      static MPI_Datatype msgTypePlane ;
      static bool packPlane ;
      int sendCount = dx * dy ;

      if (msgTypePlane == 0) {
         /* Create an MPI_struct for field data */
         if (ALLOW_UNPACKED_PLANE && packable) {

            MPI_Type_vector(xferFields, sendCount,
                            (fieldData[1] - fieldData[0]),
                            baseType, &msgTypePlane) ;
            MPI_Type_commit(&msgTypePlane) ;
            packPlane = false ;
         }
         else {
            msgTypePlane = baseType ;
            packPlane = true ;
         }
      }

      if (planeMin) {
         /* contiguous memory */
         if (packPlane) {
            destAddr = &domain->commDataSend[pmsg * maxPlaneComm] ;
            for (Index_t fi=0 ; fi<xferFields; ++fi) {
               Real_t *srcAddr = fieldData[fi] ;
               memcpy(destAddr, srcAddr, sendCount*sizeof(Real_t)) ;
               destAddr += sendCount ;
            }
            destAddr -= xferFields*sendCount ;
         }
         else {
            destAddr = fieldData[0] ;
         }

         MPI_Isend(destAddr, (packPlane ? xferFields*sendCount : 1),
                   msgTypePlane, myRank - domain->tp*domain->tp, msgType,
                   MPI_COMM_WORLD, &domain->sendRequest[pmsg]) ;
         ++pmsg ;
      }
      if (planeMax && doSend) {
         /* contiguous memory */
         Index_t offset = dx*dy*(dz - 1) ;
         if (packPlane) {
            destAddr = &domain->commDataSend[pmsg * maxPlaneComm] ;
            for (Index_t fi=0 ; fi<xferFields; ++fi) {
               Real_t *srcAddr = &fieldData[fi][offset] ;
               memcpy(destAddr, srcAddr, sendCount*sizeof(Real_t)) ;
               destAddr += sendCount ;
            }
            destAddr -= xferFields*sendCount ;
         }
         else {
            destAddr = &fieldData[0][offset] ;
         }

         MPI_Isend(destAddr, (packPlane ? xferFields*sendCount : 1),
                   msgTypePlane, myRank + domain->tp*domain->tp, msgType,
                   MPI_COMM_WORLD, &domain->sendRequest[pmsg]) ;
         ++pmsg ;
      }
   }
}


//

void CommMonoQ(Domain *domain)
void CommSyncPosVel(Domain *domain) {

   if (domain->numProcs == 1) return ;

   int myRank ;
   bool doRecv = false ;
   Index_t xferFields = 6 ; /* x, y, z, xd, yd, zd */
   Real_t *fieldData[6] ;
   Index_t maxPlaneComm = xferFields * domain->maxPlaneSize ;
   Index_t maxEdgeComm  = xferFields * domain->maxEdgeSize ;
   Index_t pmsg = 0 ; /* plane comm msg */
   Index_t emsg = 0 ; /* edge comm msg */
   Index_t cmsg = 0 ; /* corner comm msg */
   Index_t dx = domain->sizeX + 1 ;
   Index_t dy = domain->sizeY + 1 ;
   Index_t dz = domain->sizeZ + 1 ;
   MPI_Status status ;
   Real_t *srcAddr ;
   bool rowMin, rowMax, colMin, colMax, planeMin, planeMax ;
   /* assume communication to 6 neighbors by default */
   rowMin = rowMax = colMin = colMax = planeMin = planeMax = true ;
   if (domain->rowLoc == 0) {
      rowMin = false ;
   }
   if (domain->rowLoc == (domain->tp-1)) {
      rowMax = false ;
   }
   if (domain->colLoc == 0) {
      colMin = false ;
   }
   if (domain->colLoc == (domain->tp-1)) {
      colMax = false ;
   }
   if (domain->planeLoc == 0) {
      planeMin = false ;
   }
   if (domain->planeLoc == (domain->tp-1)) {
      planeMax = false ;
   }

   fieldData[0] = domain->x ;
   fieldData[1] = domain->y ;
   fieldData[2] = domain->z ;
   fieldData[3] = domain->xd ;
   fieldData[4] = domain->yd ;
   fieldData[5] = domain->zd ;

   MPI_Comm_rank(MPI_COMM_WORLD, &myRank) ;

   if (planeMin | planeMax) {
      /* ASSUMING ONE DOMAIN PER RANK, CONSTANT BLOCK SIZE HERE */
      Index_t opCount = dx * dy ;

      if (planeMin && doRecv) {
         /* contiguous memory */
         srcAddr = &domain->commDataRecv[pmsg * maxPlaneComm] ;
         MPI_Wait(&domain->recvRequest[pmsg], &status) ;
         for (Index_t fi=0 ; fi<xferFields; ++fi) {
            Real_t *destAddr = fieldData[fi] ;
            for (Index_t i=0; i<opCount; ++i) {
               destAddr[i] = srcAddr[i] ;
            }
            srcAddr += opCount ;
         }
         ++pmsg ;
      }
      if (planeMax) {
         /* contiguous memory */
         Index_t offset = dx*dy*(dz - 1) ;
         srcAddr = &domain->commDataRecv[pmsg * maxPlaneComm] ;
         MPI_Wait(&domain->recvRequest[pmsg], &status) ;
         for (Index_t fi=0 ; fi<xferFields; ++fi) {
            Real_t *destAddr = &fieldData[fi][offset] ;
            for (Index_t i=0; i<opCount; ++i) {
               destAddr[i] = srcAddr[i] ;
            }
            srcAddr += opCount ;
         }
         ++pmsg ;
      }
   }

   if (rowMin | rowMax) {
      /* ASSUMING ONE DOMAIN PER RANK, CONSTANT BLOCK SIZE HERE */
      Index_t opCount = dx * dz ;

      if (rowMin && doRecv) {
         /* contiguous memory */
         srcAddr = &domain->commDataRecv[pmsg * maxPlaneComm] ;
         MPI_Wait(&domain->recvRequest[pmsg], &status) ;
         for (Index_t fi=0 ; fi<xferFields; ++fi) {
            for (Index_t i=0; i<dz; ++i) {
               Real_t *destAddr = &fieldData[fi][i*dx*dy] ;
               for (Index_t j=0; j<dx; ++j) {
                  destAddr[j] = srcAddr[i*dx + j] ;
               }
            }
            srcAddr += opCount ;
         }
         ++pmsg ;
      }
      if (rowMax) {
         /* contiguous memory */
         Index_t offset = dx*(dy - 1) ;
         srcAddr = &domain->commDataRecv[pmsg * maxPlaneComm] ;
         MPI_Wait(&domain->recvRequest[pmsg], &status) ;
         for (Index_t fi=0 ; fi<xferFields; ++fi) {
            for (Index_t i=0; i<dz; ++i) {
               Real_t *destAddr = &fieldData[fi][offset + i*dx*dy] ;
               for (Index_t j=0; j<dx; ++j) {
                  destAddr[j] = srcAddr[i*dx + j] ;
               }
            }
            srcAddr += opCount ;
         }
         ++pmsg ;
      }
   }
}


void CalcElemNodeNormals(Real_t pfx[8],
                         Real_t pfy[8],
                         Real_t pfz[8],
                         const Real_t x[8],
                         const Real_t y[8],
                         const Real_t z[8])
{
   for (Index_t i = 0 ; i < 8 ; ++i) {
      pfx[i] = Real_t(0.0);
      pfy[i] = Real_t(0.0);
      pfz[i] = Real_t(0.0);
   }
}


static inline
void IntegrateStressForElems( Index_t *nodelist,
                              Real_t *x,  Real_t *y,  Real_t *z,
                              Real_t *fx, Real_t *fy, Real_t *fz,
                              Real_t *sigxx, Real_t *sigyy, Real_t *sigzz,
                              Real_t *determ, Index_t numElem)
{
  Real_t B[3][8] ;// shape function derivatives
  Real_t x_local[8] ;
  Real_t y_local[8] ;
  Real_t z_local[8] ;
  Real_t fx_local[8] ;
  Real_t fy_local[8] ;
  Real_t fz_local[8] ;

  // \pp early communication block moved here
  //     hoisted up declaration for clarity
  Real_t *fieldData[3] ;

  fieldData[0] = domain->fx ;
  fieldData[1] = domain->fy ;
  fieldData[2] = domain->fz ;

  // loop over all elements
  for( Index_t k=0 ; k<numElem ; ++k )
  {
    const Index_t* const elemNodes = &nodelist[8*k];

    // get nodal coordinates from global arrays and copy into local arrays.
    for( Index_t lnode=0 ; lnode<8 ; ++lnode )
    {
      Index_t gnode = elemNodes[lnode];
      x_local[lnode] = x[gnode];
      y_local[lnode] = y[gnode];
      z_local[lnode] = z[gnode];
    }

    /* Volume calculation involves extra work for numerical consistency. */
    CalcElemShapeFunctionDerivatives(x_local, y_local, z_local,
                                         B, &determ[k]);

    CalcElemNodeNormals( B[0] , B[1], B[2],
                          x_local, y_local, z_local );

    SumElemStressesToNodeForces( B, sigxx[k], sigyy[k], sigzz[k],
                                         fx_local, fy_local, fz_local ) ;

    // copy nodal force contributions to global force arrray.
    for( Index_t lnode=0 ; lnode<8 ; ++lnode )
    {
      Index_t gnode = elemNodes[lnode];
      fx[gnode] += fx_local[lnode];
      fy[gnode] += fy_local[lnode];
      fz[gnode] += fz_local[lnode];
    }
  }

   for (Index_t plane=0; plane<edgeElems; ++plane) {
      for (Index_t row=0; row<edgeElems; ++row) {
         for (Index_t col=0; col<edgeElems; ++col) {
            Index_t *localNode = &domain->nodelist[8*zidx] ;
            localNode[0] = nidx                                       ;
            localNode[1] = nidx                                   + 1 ;
            localNode[2] = nidx                       + edgeNodes + 1 ;
            localNode[3] = nidx                       + edgeNodes     ;
            localNode[4] = nidx + edgeNodes*edgeNodes                 ;
            localNode[5] = nidx + edgeNodes*edgeNodes             + 1 ;
            localNode[6] = nidx + edgeNodes*edgeNodes + edgeNodes + 1 ;
            localNode[7] = nidx + edgeNodes*edgeNodes + edgeNodes     ;
            ++zidx ;
            ++nidx ;
         }
         ++nidx ;
      }
      nidx += edgeNodes ;
   }


  {
    // \pp early communication block moved here
    // CommSend(domain, MSG_COMM_SBN, 3, fieldData, domain->sizeX + 1, domain->sizeY + 1, domain->sizeZ + 1, true, false);
    {
      // \pp one of up to 26 sends from this node:
      //     as we use non-blocking sends (MPI_Isend), do we need to know that
      //     destAddr points into non-overlapping regions?
      destAddr = &domain->commDataSend[pmsg * maxPlaneComm] ;

      for (Index_t fi=0; fi<xferFields; ++fi) {
         for (Index_t i=0; i<dz; ++i) {
            Real_t *srcAddr = &fieldData[fi][i*dx*dy] ;
            //                               ^^^^^^^ can we find the dependence?
            for (Index_t j=0; j<dy; ++j) {
               destAddr[i*dy + j] = srcAddr[j*dx] ;
               //       ^^^^^^^^            ^^^^ how do we represent the loop indices?
            }
         }
         destAddr += sendCount ;
      }
      destAddr -= xferFields*sendCount ;
      MPI_Isend(destAddr, (packCol ? xferFields*sendCount : 1), msgTypeCol, myRank - 1, msgType, MPI_COMM_WORLD, &domain->sendRequest[pmsg]) ;
      ++pmsg ;
    }

    CommSBN(domain, 3, fieldData) ;
  }
}


static inline
void CalcHourglassControlForElems(Domain *domain,
                                  Real_t determ[], Real_t hgcoef)
{
   Index_t i, ii, jj ;
   Real_t  x1[8],  y1[8],  z1[8] ;
   Real_t pfx[8], pfy[8], pfz[8] ;
   Index_t numElem = domain->numElem ;
   Index_t numElem8 = numElem * 8 ;
   Real_t *dvdx = Allocate<Real_t>(numElem8) ;
   Real_t *dvdy = Allocate<Real_t>(numElem8) ;
   Real_t *dvdz = Allocate<Real_t>(numElem8) ;
   Real_t *x8n  = Allocate<Real_t>(numElem8) ;
   Real_t *y8n  = Allocate<Real_t>(numElem8) ;
   Real_t *z8n  = Allocate<Real_t>(numElem8) ;

   /* start loop over elements */
   for (i=0 ; i<numElem ; ++i){

      Index_t* elemToNode = &domain->nodelist[8*i];
      CollectDomainNodesToElemNodes(domain->x, domain->y, domain->z,
                                    elemToNode, x1, y1, z1);

      CalcElemVolumeDerivative(pfx, pfy, pfz, x1, y1, z1);

      /* load into temporary storage for FB Hour Glass control */
      for(ii=0;ii<8;++ii){
         jj=8*i+ii;

         dvdx[jj] = pfx[ii];
         dvdy[jj] = pfy[ii];
         dvdz[jj] = pfz[ii];
         x8n[jj]  = x1[ii];
         y8n[jj]  = y1[ii];
         z8n[jj]  = z1[ii];
      }

      determ[i] = domain->volo[i] * domain->v[i];

      /* Do a check for negative volumes */
      if ( domain->v[i] <= Real_t(0.0) ) {
         MPI_Abort(MPI_COMM_WORLD, VolumeError) ;
      }
   }

   if ( hgcoef > Real_t(0.) ) {
      CalcFBHourglassForceForElems( domain->nodelist,
                                    domain->ss, domain->elemMass,
                                    domain->xd, domain->yd, domain->zd,
                                    domain->fx, domain->fy, domain->fz,
                                    determ, x8n, y8n, z8n, dvdx, dvdy, dvdz,
                                    hgcoef, numElem) ;
   }

   Release(&z8n) ;
   Release(&y8n) ;
   Release(&x8n) ;
   Release(&dvdz) ;
   Release(&dvdy) ;
   Release(&dvdx) ;

   return ;
}


static inline
void CalcFBHourglassForceForElems( Index_t *nodelist,
                                   Real_t *ss, Real_t *elemMass,
                                   Real_t *xd, Real_t *yd, Real_t *zd,
                                   Real_t *fx, Real_t *fy, Real_t *fz,
                                   Real_t *determ,
                                   Real_t *x8n, Real_t *y8n, Real_t *z8n,
                                   Real_t *dvdx, Real_t *dvdy, Real_t *dvdz,
                                   Real_t hourg, Index_t numElem)
{
   /*************************************************
    *
    *     FUNCTION: Calculates the Flanagan-Belytschko anti-hourglass
    *               force.
    *
    *************************************************/

    ...

   for(Index_t i2=0;i2<numElem;++i2){
      const Index_t *elemToNode = &nodelist[8*i2];
      Index_t i3=8*i2;
      Real_t volinv=Real_t(1.0)/determ[i2];
      Real_t ss1, mass1, volume13 ;
      for(Index_t i1=0;i1<4;++i1){

         Real_t hourmodx =
            x8n[i3] * gamma[i1][0] + x8n[i3+1] * gamma[i1][1] +
            x8n[i3+2] * gamma[i1][2] + x8n[i3+3] * gamma[i1][3] +
            x8n[i3+4] * gamma[i1][4] + x8n[i3+5] * gamma[i1][5] +
            x8n[i3+6] * gamma[i1][6] + x8n[i3+7] * gamma[i1][7];

         Real_t hourmody =
            y8n[i3] * gamma[i1][0] + y8n[i3+1] * gamma[i1][1] +
            y8n[i3+2] * gamma[i1][2] + y8n[i3+3] * gamma[i1][3] +
            y8n[i3+4] * gamma[i1][4] + y8n[i3+5] * gamma[i1][5] +
            y8n[i3+6] * gamma[i1][6] + y8n[i3+7] * gamma[i1][7];

         Real_t hourmodz =
            z8n[i3] * gamma[i1][0] + z8n[i3+1] * gamma[i1][1] +
            z8n[i3+2] * gamma[i1][2] + z8n[i3+3] * gamma[i1][3] +
            z8n[i3+4] * gamma[i1][4] + z8n[i3+5] * gamma[i1][5] +
            z8n[i3+6] * gamma[i1][6] + z8n[i3+7] * gamma[i1][7];

         hourgam0[i1] = gamma[i1][0] -  volinv*(dvdx[i3  ] * hourmodx +
                                                  dvdy[i3  ] * hourmody +
                                                  dvdz[i3  ] * hourmodz );

         hourgam1[i1] = gamma[i1][1] -  volinv*(dvdx[i3+1] * hourmodx +
                                                  dvdy[i3+1] * hourmody +
                                                  dvdz[i3+1] * hourmodz );

         hourgam2[i1] = gamma[i1][2] -  volinv*(dvdx[i3+2] * hourmodx +
                                                  dvdy[i3+2] * hourmody +
                                                  dvdz[i3+2] * hourmodz );

         hourgam3[i1] = gamma[i1][3] -  volinv*(dvdx[i3+3] * hourmodx +
                                                  dvdy[i3+3] * hourmody +
                                                  dvdz[i3+3] * hourmodz );

         hourgam4[i1] = gamma[i1][4] -  volinv*(dvdx[i3+4] * hourmodx +
                                                  dvdy[i3+4] * hourmody +
                                                  dvdz[i3+4] * hourmodz );

         hourgam5[i1] = gamma[i1][5] -  volinv*(dvdx[i3+5] * hourmodx +
                                                  dvdy[i3+5] * hourmody +
                                                  dvdz[i3+5] * hourmodz );

         hourgam6[i1] = gamma[i1][6] -  volinv*(dvdx[i3+6] * hourmodx +
                                                  dvdy[i3+6] * hourmody +
                                                  dvdz[i3+6] * hourmodz );

         hourgam7[i1] = gamma[i1][7] -  volinv*(dvdx[i3+7] * hourmodx +
                                                  dvdy[i3+7] * hourmody +
                                                  dvdz[i3+7] * hourmodz );

      }

      /* compute forces */
      /* store forces into h arrays (force arrays) */

      ss1=ss[i2];
      mass1=elemMass[i2];
      volume13=CBRT(determ[i2]);

      Index_t n0si2 = elemToNode[0];
      Index_t n1si2 = elemToNode[1];
      Index_t n2si2 = elemToNode[2];
      Index_t n3si2 = elemToNode[3];
      Index_t n4si2 = elemToNode[4];
      Index_t n5si2 = elemToNode[5];
      Index_t n6si2 = elemToNode[6];
      Index_t n7si2 = elemToNode[7];

      xd1[0] = xd[n0si2];
      xd1[1] = xd[n1si2];
      xd1[2] = xd[n2si2];
      xd1[3] = xd[n3si2];
      xd1[4] = xd[n4si2];
      xd1[5] = xd[n5si2];
      xd1[6] = xd[n6si2];
      xd1[7] = xd[n7si2];

      yd1[0] = yd[n0si2];
      yd1[1] = yd[n1si2];
      yd1[2] = yd[n2si2];
      yd1[3] = yd[n3si2];
      yd1[4] = yd[n4si2];
      yd1[5] = yd[n5si2];
      yd1[6] = yd[n6si2];
      yd1[7] = yd[n7si2];

      zd1[0] = zd[n0si2];
      zd1[1] = zd[n1si2];
      zd1[2] = zd[n2si2];
      zd1[3] = zd[n3si2];
      zd1[4] = zd[n4si2];
      zd1[5] = zd[n5si2];
      zd1[6] = zd[n6si2];
      zd1[7] = zd[n7si2];

      coefficient = - hourg * Real_t(0.01) * ss1 * mass1 / volume13;

      CalcElemFBHourglassForce(xd1,yd1,zd1,
                      hourgam0,hourgam1,hourgam2,hourgam3,
                      hourgam4,hourgam5,hourgam6,hourgam7,
                      coefficient, hgfx, hgfy, hgfz);

      fx[n0si2] += hgfx[0];
      fy[n0si2] += hgfy[0];
      fz[n0si2] += hgfz[0];

      fx[n1si2] += hgfx[1];
      fy[n1si2] += hgfy[1];
      fz[n1si2] += hgfz[1];

      fx[n2si2] += hgfx[2];
      fy[n2si2] += hgfy[2];
      fz[n2si2] += hgfz[2];

      fx[n3si2] += hgfx[3];
      fy[n3si2] += hgfy[3];
      fz[n3si2] += hgfz[3];

      fx[n4si2] += hgfx[4];
      fy[n4si2] += hgfy[4];
      fz[n4si2] += hgfz[4];

      fx[n5si2] += hgfx[5];
      fy[n5si2] += hgfy[5];
      fz[n5si2] += hgfz[5];

      fx[n6si2] += hgfx[6];
      fy[n6si2] += hgfy[6];
      fz[n6si2] += hgfz[6];

      fx[n7si2] += hgfx[7];
      fy[n7si2] += hgfy[7];
      fz[n7si2] += hgfz[7];
   }
}








static inline
void CalcAccelerationForNodes(Real_t *xdd, Real_t *ydd, Real_t *zdd,
                              Real_t *fx, Real_t *fy, Real_t *fz,
                              Real_t *nodalMass, Index_t numNode)
{
  for (Index_t i = 0; i < numNode; ++i) {
    xdd[i] = fx[i] / nodalMass[i];
    ydd[i] = fy[i] / nodalMass[i];
    zdd[i] = fz[i] / nodalMass[i];
  }

   // \pp code below added to find loop fusion / communication potential
  Index_t numNodeBC = (size+1)*(size+1) ;
  if (symmX != 0) {
     for(Index_t i=0 ; i<numNodeBC ; ++i)
        xdd[symmX[i]] = Real_t(0.0) ;
  }

  if (symmY != 0) {
     for(Index_t i=0 ; i<numNodeBC ; ++i)
        ydd[symmY[i]] = Real_t(0.0) ;
  }
}


static inline
void ApplyAccelerationBoundaryConditionsForNodes(Real_t *xdd, Real_t *ydd,
                                                 Real_t *zdd, Index_t *symmX,
                                                 Index_t *symmY,
                                                 Index_t *symmZ, Index_t size)
{
  Index_t numNodeBC = (size+1)*(size+1) ;
  if (symmX != 0) {
     for(Index_t i=0 ; i<numNodeBC ; ++i)
        xdd[symmX[i]] = Real_t(0.0) ;
  }

  if (symmY != 0) {
     for(Index_t i=0 ; i<numNodeBC ; ++i)
        ydd[symmY[i]] = Real_t(0.0) ;
  }

  if (symmZ != 0) {
     for(Index_t i=0 ; i<numNodeBC ; ++i)
        zdd[symmZ[i]] = Real_t(0.0) ;
  }
}


static inline
void CalcVelocityForNodes(Real_t *xd,  Real_t *yd,  Real_t *zd,
                          Real_t *xdd, Real_t *ydd, Real_t *zdd,
                          const Real_t dt, const Real_t u_cut,
                          Index_t numNode)
{
   for ( Index_t i = 0 ; i < numNode ; ++i )
   {
     Real_t xdtmp, ydtmp, zdtmp ;

     xdtmp = xd[i] + xdd[i] * dt ;
     if( FABS(xdtmp) < u_cut ) xdtmp = Real_t(0.0);
     xd[i] = xdtmp ;

     ydtmp = yd[i] + ydd[i] * dt ;
     if( FABS(ydtmp) < u_cut ) ydtmp = Real_t(0.0);
     yd[i] = ydtmp ;

     zdtmp = zd[i] + zdd[i] * dt ;
     if( FABS(zdtmp) < u_cut ) zdtmp = Real_t(0.0);
     zd[i] = zdtmp ;
   }
}


static inline
void CalcKinematicsForElems( Index_t *nodelist,
                             Real_t *x,   Real_t *y,   Real_t *z,
                             Real_t *xd,  Real_t *yd,  Real_t *zd,
                             Real_t *dxx, Real_t *dyy, Real_t *dzz,
                             Real_t *v, Real_t *volo,
                             Real_t *vnew, Real_t *delv, Real_t *arealg,
                             Real_t deltaTime, Index_t numElem )
{
  Real_t B[3][8] ; /** shape function derivatives */
  Real_t D[6] ;
  Real_t x_local[8] ;
  Real_t y_local[8] ;
  Real_t z_local[8] ;
  Real_t xd_local[8] ;
  Real_t yd_local[8] ;
  Real_t zd_local[8] ;
  Real_t detJ = Real_t(0.0) ;

  // loop over all elements
  for( Index_t k=0 ; k<numElem ; ++k )
  {
    Real_t volume ;
    Real_t relativeVolume ;
    const Index_t* const elemToNode = &nodelist[8*k] ;

    // get nodal coordinates from global arrays and copy into local arrays.
    for( Index_t lnode=0 ; lnode<8 ; ++lnode )
    {
      Index_t gnode = elemToNode[lnode];
      x_local[lnode] = x[gnode];
      y_local[lnode] = y[gnode];
      z_local[lnode] = z[gnode];
    }

    // volume calculations
    volume = CalcElemVolume(x_local, y_local, z_local );
    relativeVolume = volume / volo[k] ;
    vnew[k] = relativeVolume ;
    delv[k] = relativeVolume - v[k] ;

    // set characteristic length
    arealg[k] = CalcElemCharacteristicLength(x_local, y_local, z_local,
                                             volume);

    // get nodal velocities from global array and copy into local arrays.
    for( Index_t lnode=0 ; lnode<8 ; ++lnode )
    {
      Index_t gnode = elemToNode[lnode];
      xd_local[lnode] = xd[gnode];
      yd_local[lnode] = yd[gnode];
      zd_local[lnode] = zd[gnode];
    }

    Real_t dt2 = Real_t(0.5) * deltaTime;
    for ( Index_t j=0 ; j<8 ; ++j )
    {
       x_local[j] -= dt2 * xd_local[j];
       y_local[j] -= dt2 * yd_local[j];
       z_local[j] -= dt2 * zd_local[j];
    }

    CalcElemShapeFunctionDerivatives( x_local, y_local, z_local,
                                      B, &detJ );

    CalcElemVelocityGrandient( xd_local, yd_local, zd_local,
                               B, detJ, D );

    // put velocity gradient quantities into their global arrays.
    dxx[k] = D[0];
    dyy[k] = D[1];
    dzz[k] = D[2];
  }
}


static inline
void CalcLagrangeElements(Domain *domain)
{
   Index_t numElem = domain->numElem ;
   if (numElem > 0) {
      const Real_t deltatime = domain->deltatime ;

      domain->dxx  = new Real_t[numElem] ; /* principal strains */
      domain->dyy  = new Real_t[numElem] ;
      domain->dzz  = new Real_t[numElem] ;

      CalcKinematicsForElems(domain->nodelist,
                             domain->x, domain->y, domain->z,
                             domain->xd, domain->yd, domain->zd,
                             domain->dxx, domain->dyy, domain->dzz,
                             domain->v, domain->volo,
                             domain->vnew, domain->delv, domain->arealg,
                             deltatime, numElem) ;

      // element loop to do some stuff not included in the elemlib function.
      for ( Index_t k=0 ; k<numElem ; ++k )
      {
        // calc strain rate and apply as constraint (only done in FB element)
        Real_t vdov = domain->dxx[k] + domain->dyy[k] + domain->dzz[k] ;
        Real_t vdovthird = vdov/Real_t(3.0) ;

        // make the rate of deformation tensor deviatoric
        domain->vdov[k] = vdov ;
        domain->dxx[k] -= vdovthird ;
        domain->dyy[k] -= vdovthird ;
        domain->dzz[k] -= vdovthird ;

        // See if any volumes are negative, and take appropriate action.
        if (domain->vnew[k] <= Real_t(0.0))
        {
           MPI_Abort(MPI_COMM_WORLD, VolumeError) ;
        }
      }

      delete [] domain->dzz ;
      delete [] domain->dyy ;
      delete [] domain->dxx ;
   }
}


static inline
void CalcMonotonicQRegionForElems(
                           Index_t *matElemlist, Index_t *elemBC,
                           Index_t *lxim,   Index_t *lxip,
                           Index_t *letam,  Index_t *letap,
                           Index_t *lzetam, Index_t *lzetap,
                           Real_t *delv_xi,Real_t *delv_eta,Real_t *delv_zeta,
                           Real_t *delx_xi,Real_t *delx_eta,Real_t *delx_zeta,
                           Real_t *vdov, Real_t *volo, Real_t *vnew,
                           Real_t *elemMass, Real_t *qq, Real_t *ql,
                           Real_t qlc_monoq, Real_t qqc_monoq,
                           Real_t monoq_limiter_mult,
                           Real_t monoq_max_slope,
                           Real_t ptiny, Index_t numElem )
{
   for ( Index_t ielem = 0 ; ielem < numElem; ++ielem ) {
      Real_t qlin, qquad ;
      Real_t phixi, phieta, phizeta ;
      Index_t i = matElemlist[ielem];
      Int_t bcMask = elemBC[i] ;
      Real_t delvm, delvp ;

      /*  phixi     */
      Real_t norm = Real_t(1.) / ( delv_xi[i] + ptiny ) ;

      switch (bcMask & XI_M) {
         case XI_M_COMM: /* needs comm data */
         case 0:         delvm = delv_xi[lxim[i]] ; break ;
         case XI_M_SYMM: delvm = delv_xi[i] ;       break ;
         case XI_M_FREE: delvm = Real_t(0.0) ;      break ;
         default:        /* ERROR */ ;              break ;
      }
      switch (bcMask & XI_P) {
         case XI_P_COMM: /* needs comm data */
         case 0:         delvp = delv_xi[lxip[i]] ; break ;
         case XI_P_SYMM: delvp = delv_xi[i] ;       break ;
         case XI_P_FREE: delvp = Real_t(0.0) ;      break ;
         default:        /* ERROR */ ;              break ;
      }

      delvm = delvm * norm ;
      delvp = delvp * norm ;

      phixi = Real_t(.5) * ( delvm + delvp ) ;

      delvm *= monoq_limiter_mult ;
      delvp *= monoq_limiter_mult ;

      if ( delvm < phixi ) phixi = delvm ;
      if ( delvp < phixi ) phixi = delvp ;
      if ( phixi < Real_t(0.)) phixi = Real_t(0.) ;
      if ( phixi > monoq_max_slope) phixi = monoq_max_slope;


      /*  phieta     */
      norm = Real_t(1.) / ( delv_eta[i] + ptiny ) ;

      switch (bcMask & ETA_M) {
         case ETA_M_COMM: /* needs comm data */
         case 0:          delvm = delv_eta[letam[i]] ; break ;
         case ETA_M_SYMM: delvm = delv_eta[i] ;        break ;
         case ETA_M_FREE: delvm = Real_t(0.0) ;        break ;
         default:         /* ERROR */ ;                break ;
      }
      switch (bcMask & ETA_P) {
         case ETA_P_COMM: /* needs comm data */
         case 0:          delvp = delv_eta[letap[i]] ; break ;
         case ETA_P_SYMM: delvp = delv_eta[i] ;        break ;
         case ETA_P_FREE: delvp = Real_t(0.0) ;        break ;
         default:         /* ERROR */ ;                break ;
      }

      delvm = delvm * norm ;
      delvp = delvp * norm ;

      phieta = Real_t(.5) * ( delvm + delvp ) ;

      delvm *= monoq_limiter_mult ;
      delvp *= monoq_limiter_mult ;

      if ( delvm  < phieta ) phieta = delvm ;
      if ( delvp  < phieta ) phieta = delvp ;
      if ( phieta < Real_t(0.)) phieta = Real_t(0.) ;
      if ( phieta > monoq_max_slope)  phieta = monoq_max_slope;

      /*  phizeta     */
      norm = Real_t(1.) / ( delv_zeta[i] + ptiny ) ;

      switch (bcMask & ZETA_M) {
         case ZETA_M_COMM: /* needs comm data */
         case 0:           delvm = delv_zeta[lzetam[i]] ; break ;
         case ZETA_M_SYMM: delvm = delv_zeta[i] ;         break ;
         case ZETA_M_FREE: delvm = Real_t(0.0) ;          break ;
         default:          /* ERROR */ ;                  break ;
      }
      switch (bcMask & ZETA_P) {
         case ZETA_P_COMM: /* needs comm data */
         case 0:           delvp = delv_zeta[lzetap[i]] ; break ;
         case ZETA_P_SYMM: delvp = delv_zeta[i] ;         break ;
         case ZETA_P_FREE: delvp = Real_t(0.0) ;          break ;
         default:          /* ERROR */ ;                  break ;
      }

      ....

   }
}




static inline
void CalcPressureForElems(Real_t* p_new, Real_t* bvc,
                          Real_t* pbvc, Real_t* e_old,
                          Real_t* compression, Real_t *vnewc,
                          Real_t pmin,
                          Real_t p_cut, Real_t eosvmax,
                          Index_t length)
{
   Real_t c1s = Real_t(2.0)/Real_t(3.0) ;
   for (Index_t i = 0; i < length ; ++i) {
      bvc[i] = c1s * (compression[i] + Real_t(1.));
      pbvc[i] = c1s;
   }

   for (Index_t i = 0 ; i < length ; ++i){
      p_new[i] = bvc[i] * e_old[i] ;

      if    (FABS(p_new[i]) <  p_cut   )
         p_new[i] = Real_t(0.0) ;

      if    ( vnewc[i] >= eosvmax ) /* impossible condition here? */
         p_new[i] = Real_t(0.0) ;

      if    (p_new[i]       <  pmin)
         p_new[i]   = pmin ;
   }
}


static inline
void CalcEnergyForElems(Real_t* p_new, Real_t* e_new, Real_t* q_new,
                        Real_t* bvc, Real_t* pbvc,
                        Real_t* p_old, Real_t* e_old, Real_t* q_old,
                        Real_t* compression, Real_t* compHalfStep,
                        Real_t* vnewc, Real_t* work, Real_t* delvc, Real_t pmin,
                        Real_t p_cut, Real_t  e_cut, Real_t q_cut, Real_t emin,
                        Real_t* qq_old, Real_t* ql_old,
                        Real_t rho0,
                        Real_t eosvmax,
                        Index_t length)
{
   const Real_t sixth = Real_t(1.0) / Real_t(6.0) ;
   Real_t *pHalfStep = Allocate<Real_t>(length) ;

   for (Index_t i = 0 ; i < length ; ++i) {
      e_new[i] = e_old[i] - Real_t(0.5) * delvc[i] * (p_old[i] + q_old[i])
         + Real_t(0.5) * work[i];

      if (e_new[i]  < emin ) {
         e_new[i] = emin ;
      }
   }

   CalcPressureForElems(pHalfStep, bvc, pbvc, e_new, compHalfStep, vnewc,
                   pmin, p_cut, eosvmax, length);

   for (Index_t i = 0 ; i < length ; ++i) {
      Real_t vhalf = Real_t(1.) / (Real_t(1.) + compHalfStep[i]) ;

      if ( delvc[i] > Real_t(0.) ) {
         q_new[i] /* = qq_old[i] = ql_old[i] */ = Real_t(0.) ;
      }
      else {
         Real_t ssc = ( pbvc[i] * e_new[i]
                 + vhalf * vhalf * bvc[i] * pHalfStep[i] ) / rho0 ;

         if ( ssc <= Real_t(1.111111e-36) ) {
            ssc = Real_t(.333333e-18) ;
         } else {
            ssc = SQRT(ssc) ;
         }

         q_new[i] = (ssc*ql_old[i] + qq_old[i]) ;
      }

      e_new[i] = e_new[i] + Real_t(0.5) * delvc[i]
         * (  Real_t(3.0)*(p_old[i]     + q_old[i])
              - Real_t(4.0)*(pHalfStep[i] + q_new[i])) ;
   }

   for (Index_t i = 0 ; i < length ; ++i) {

      e_new[i] += Real_t(0.5) * work[i];

      if (FABS(e_new[i]) < e_cut) {
         e_new[i] = Real_t(0.)  ;
      }
      if (     e_new[i]  < emin ) {
         e_new[i] = emin ;
      }
   }

   CalcPressureForElems(p_new, bvc, pbvc, e_new, compression, vnewc,
                   pmin, p_cut, eosvmax, length);

   for (Index_t i = 0 ; i < length ; ++i){
      Real_t q_tilde ;

      if (delvc[i] > Real_t(0.)) {
         q_tilde = Real_t(0.) ;
      }
      else {
         Real_t ssc = ( pbvc[i] * e_new[i]
                 + vnewc[i] * vnewc[i] * bvc[i] * p_new[i] ) / rho0 ;

         if ( ssc <= Real_t(1.111111e-36) ) {
            ssc = Real_t(.333333e-18) ;
         } else {
            ssc = SQRT(ssc) ;
         }

         q_tilde = (ssc*ql_old[i] + qq_old[i]) ;
      }

      e_new[i] = e_new[i] - (  Real_t(7.0)*(p_old[i]     + q_old[i])
                               - Real_t(8.0)*(pHalfStep[i] + q_new[i])
                               + (p_new[i] + q_tilde)) * delvc[i]*sixth ;

      if (FABS(e_new[i]) < e_cut) {
         e_new[i] = Real_t(0.)  ;
      }
      if (     e_new[i]  < emin ) {
         e_new[i] = emin ;
      }
   }

   CalcPressureForElems(p_new, bvc, pbvc, e_new, compression, vnewc,
                   pmin, p_cut, eosvmax, length);

   for (Index_t i = 0 ; i < length ; ++i){

      if ( delvc[i] <= Real_t(0.) ) {
         Real_t ssc = ( pbvc[i] * e_new[i]
                 + vnewc[i] * vnewc[i] * bvc[i] * p_new[i] ) / rho0 ;

         if ( ssc <= Real_t(1.111111e-36) ) {
            ssc = Real_t(.333333e-18) ;
         } else {
            ssc = SQRT(ssc) ;
         }

         q_new[i] = (ssc*ql_old[i] + qq_old[i]) ;

         if (FABS(q_new[i]) < q_cut) q_new[i] = Real_t(0.) ;
      }
   }

   Release(&pHalfStep) ;

   return ;
}


static inline
void CalcCourantConstraintForElems(Index_t *matElemlist, Real_t *ss,
                                   Real_t *vdov, Real_t *arealg,
                                   Real_t qqc, Index_t length,
                                   Real_t *dtcourant)
{
   Real_t dtcourant_tmp = Real_t(1.0e+20) ;
   Index_t   courant_elem = -1 ;

   Real_t  qqc2 = Real_t(64.0) * qqc * qqc ;

   for (Index_t i = 0 ; i < length ; ++i) {
      Index_t indx = matElemlist[i] ;

      Real_t dtf = ss[indx] * ss[indx] ;

      if ( vdov[indx] < Real_t(0.) ) {

         dtf = dtf
            + qqc2 * arealg[indx] * arealg[indx] * vdov[indx] * vdov[indx] ;
      }

      dtf = SQRT(dtf) ;

      dtf = arealg[indx] / dtf ;

      /* determine minimum timestep with its corresponding elem */

      if (vdov[indx] != Real_t(0.)) {
         if ( dtf < dtcourant_tmp ) {
            dtcourant_tmp = dtf ;
            courant_elem = indx ;
         }
      }
   }

   /* Don't try to register a time constraint if none of the elements
    * were active */

   if (courant_elem != -1) {
      *dtcourant = dtcourant_tmp ;
   }

   return ;
}

static inline
void CalcHydroConstraintForElems(Index_t *matElemlist, Real_t *vdov,
                                 Real_t dvovmax, Index_t length,
                                 Real_t *dthydro)
{
   Real_t dthydro_tmp = Real_t(1.0e+20) ;
   Index_t hydro_elem = -1 ;

   for (Index_t i = 0 ; i < length ; ++i) {
      Index_t indx = matElemlist[i] ;

      if (vdov[indx] != Real_t(0.)) {
         Real_t dtdvov = dvovmax / (FABS(vdov[indx])+Real_t(1.e-20)) ;
         if ( dthydro_tmp > dtdvov ) {
            dthydro_tmp = dtdvov ;
            hydro_elem = indx ;
         }
      }
   }

   if (hydro_elem != -1) {
      *dthydro = dthydro_tmp ;
   }

   return ;
}


Domain *NewDomain(Index_t colLoc, Index_t rowLoc, Index_t planeLoc, Index_t nx, int tp)
{
   ...

   for (Index_t i=0; i<domElems; ++i) {
      domain->e[i] = Real_t(0.0) ;
      domain->p[i] = Real_t(0.0) ;
      domain->v[i] = Real_t(1.0) ;
   }

   for (Index_t i=0; i<domNodes; ++i) {
      domain->xd[i] = Real_t(0.0) ;
      domain->yd[i] = Real_t(0.0) ;
      domain->zd[i] = Real_t(0.0) ;
   }

   for (Index_t i=0; i<domNodes; ++i) {
      domain->xdd[i] = Real_t(0.0) ;
      domain->ydd[i] = Real_t(0.0) ;
      domain->zdd[i] = Real_t(0.0) ;
   }

   /* initialize nodal coordinates */

   nidx = 0 ;
   tz = Real_t(1.125)*Real_t(planeLoc*nx)/Real_t(meshEdgeElems) ;
   for (Index_t plane=0; plane<edgeNodes; ++plane) {
      ty = Real_t(1.125)*Real_t(rowLoc*nx)/Real_t(meshEdgeElems) ;
      for (Index_t row=0; row<edgeNodes; ++row) {
         tx = Real_t(1.125)*Real_t(colLoc*nx)/Real_t(meshEdgeElems) ;
         for (Index_t col=0; col<edgeNodes; ++col) {
            domain->x[nidx] = tx ;
            domain->y[nidx] = ty ;
            domain->z[nidx] = tz ;
            ++nidx ;
            // tx += ds ; /* may accumulate roundoff... */
            tx = Real_t(1.125)*Real_t(colLoc*nx+col+1)/Real_t(meshEdgeElems) ;
         }
         // ty += ds ;  /* may accumulate roundoff... */
         ty = Real_t(1.125)*Real_t(rowLoc*nx+row+1)/Real_t(meshEdgeElems) ;
      }
      // tz += ds ;  /* may accumulate roundoff... */
      tz = Real_t(1.125)*Real_t(planeLoc*nx+plane+1)/Real_t(meshEdgeElems) ;
   }


   /* embed hexehedral elements in nodal point lattice */

   nidx = 0 ;
   zidx = 0 ;
   for (Index_t plane=0; plane<edgeElems; ++plane) {
      for (Index_t row=0; row<edgeElems; ++row) {
         for (Index_t col=0; col<edgeElems; ++col) {
            Index_t *localNode = &domain->nodelist[8*zidx] ;
            localNode[0] = nidx                                       ;
            localNode[1] = nidx                                   + 1 ;
            localNode[2] = nidx                       + edgeNodes + 1 ;
            localNode[3] = nidx                       + edgeNodes     ;
            localNode[4] = nidx + edgeNodes*edgeNodes                 ;
            localNode[5] = nidx + edgeNodes*edgeNodes             + 1 ;
            localNode[6] = nidx + edgeNodes*edgeNodes + edgeNodes + 1 ;
            localNode[7] = nidx + edgeNodes*edgeNodes + edgeNodes     ;
            ++zidx ;
            ++nidx ;
         }
         ++nidx ;
      }
      nidx += edgeNodes ;
   }

   /* Create a material IndexSet (entire domain same material for now) */
   for (Index_t i=0; i<domElems; ++i) {
      domain->matElemlist[i] = i ;
   }

   ...
}


static inline
void EvalEOSForElems(Domain *domain, Real_t *vnewc, Index_t numElem)
{
   ...
   /* compress data, minimal set */
   for (Index_t i=0; i<numElem; ++i) {
      Index_t zidx = domain->matElemlist[i] ;
      e_old[i] = domain->e[zidx] ;
      delvc[i] = domain->delv[zidx] ;
      p_old[i] = domain->p[zidx] ;
      q_old[i] = domain->q[zidx] ;
      qq_old[i] = domain->qq[zidx] ;
      ql_old[i] = domain->ql[zidx] ;
   }

   for (Index_t i = 0; i < numElem ; ++i) {
      Real_t vchalf ;
      compression[i] = Real_t(1.) / vnewc[i] - Real_t(1.);
      vchalf = vnewc[i] - delvc[i] * Real_t(.5);
      compHalfStep[i] = Real_t(1.) / vchalf - Real_t(1.);
   }

   /* Check for v > eosvmax or v < eosvmin */
   if ( eosvmin != Real_t(0.) ) {
      for(Index_t i=0 ; i<numElem ; ++i) {
         if (vnewc[i] <= eosvmin) { /* impossible due to calling func? */
            compHalfStep[i] = compression[i] ;
         }
      }
   }
   if ( eosvmax != Real_t(0.) ) {
      for(Index_t i=0 ; i<numElem ; ++i) {
         if (vnewc[i] >= eosvmax) { /* impossible due to calling func? */
            p_old[i]        = Real_t(0.) ;
            compression[i]  = Real_t(0.) ;
            compHalfStep[i] = Real_t(0.) ;
         }
      }
   }

   for (Index_t i = 0 ; i < numElem ; ++i) {
      work[i] = Real_t(0.) ;
   }

   CalcEnergyForElems(p_new, e_new, q_new, bvc, pbvc,
                 p_old, e_old,  q_old, compression, compHalfStep,
                 vnewc, work,  delvc, pmin,
                 p_cut, e_cut, q_cut, emin,
                 qq_old, ql_old, rho0, eosvmax, numElem);


   for (Index_t i=0; i<numElem; ++i) {
      Index_t zidx = domain->matElemlist[i] ;
      domain->p[zidx] = p_new[i] ;
      domain->e[zidx] = e_new[i] ;
      domain->q[zidx] = q_new[i] ;
   }

   ...
}

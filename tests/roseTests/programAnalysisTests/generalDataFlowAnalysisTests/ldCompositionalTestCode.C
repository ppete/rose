int global;

/*int bar(int arg)
{
  return global+arg;
}*/

int noLDProp(int& q) {
	q = 101;
	return 102;
}
int LDPropThroughArg(int& q) {
	q += 201;
	int dummyToTestForNoProp;
	return 202;
}
int LDPropThroughArgAndRet(int& q) {
	q += 301;
	return q;
}

int foo()
{
  int a=1;
  int b=2;
  int c=3;
  int d=4;

  int W = noLDProp(a);
  int X = LDPropThroughArg(b);
  int Y = LDPropThroughArgAndRet(c);
  int Z = LDPropThroughArgAndRet(d);

  return Z;
}

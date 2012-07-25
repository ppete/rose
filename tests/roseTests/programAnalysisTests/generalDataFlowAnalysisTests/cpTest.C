int global;

/*int bar(int arg)
{
  return global+arg;
}*/

void foo()
{
  int a=1;
  int b;
  b=2;
  int c=b+a;
  int d;
  if(a) {
    d=b*a;
  } else {
    d=b;
  }

  while(1) {
    int i=2;
    c=d;
  }
  d*=10;

  //global = 1;
  //int e=bar(8);
}

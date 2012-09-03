int global;

/*int bar(int arg)
{
  return global+arg;
}*/

int noLDProp(int q) {
	q = 101;
	return 102;
}
int LDPropThroughArg(int& q) {
	q += 201;
	int dummyToTestForNoProp;
	return 202;
}
int LDPropThroughRet(int q) {
	q += 301;
	return q;
}

int main()
{
  int a=1;
  int b=2;
  int c=3;
  int d=4;

  int W = noLDProp(a);
  // W : 102
  int X = LDPropThroughArg(W);
  // X : 202
  // W : 303
  int Y = LDPropThroughRet(X);
  // Y : 503
  int array[100000];
  array[a] = 12345;//LDPropThroughRet(Y);
  // array[1] : 804
  array[array[d-c]] = array[a];
  // array[804] : 804
  array[b] = LDPropThroughRet(LDPropThroughRet(array[804]));
  // array[2] : 1406;

  return array[1];
}

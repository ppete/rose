int global;

int noLDProp(int q) {
	q = 101;
	return 102;
}
int LDPropThroughArg(int& q) {
	q += 201;
	int dummyToTestForNoProp;
	return 202;
}
int LDPropThroughRet1(int q) {
	q += 301;
	return q;
}
int LDPropThroughRet2(int q) {
	q += 401;
	return q;
}
int LDPropThroughRet3(int q) {
	q += 501;
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
  int Y = LDPropThroughRet1(X);
  // Y : 503
  int array[100000];
  array[a] = LDPropThroughRet3(Y);
  array[b] = Y;
  // array[1] : 1004 
  // array[2] : 503
  array[array[d-c]] = array[a];
  // array[1004] : 1004
  array[c] = LDPropThroughRet2(LDPropThroughRet3(array[b]));
  // array[3] : 1405;

  return array[1];
}

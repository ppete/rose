int global;

/*int bar(int arg)
{
  return global+arg;
}*/

int bar(int& q) {
	q += 123;
	return 456;
}

int foo()
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

  int array[30];

  // array[20]
  array[d] = 13;

  // a = 14
  a = array[d]+1;

  // array[13] => 13
  /*int arr2d[1][1];
  arr2d[0][array[0]] = 1;*/
  array[array[d]] = 13;
  // array[14] => 14
  array[a] = 14;
  array[a+1] = bar(array[a]);
  return array[a] + array[a+1];

  //global = 1;
  //int e=bar(8);
}

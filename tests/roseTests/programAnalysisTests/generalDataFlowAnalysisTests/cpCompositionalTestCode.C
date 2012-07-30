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

  int array[30];

  // array[20]
  array[d] = 13;

  // a = 14
  a = array[d]+1;

  // array[13] => 13
  array[array[d]] = 13;
  // array[14] => 14
  array[a] = 14;

  //global = 1;
  //int e=bar(8);
}

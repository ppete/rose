
void foo(int a, int b)
{
  int  res  = a;

  for (; b > 0; --b)
  {
    res = res * 2;
  }

  ++res;
}

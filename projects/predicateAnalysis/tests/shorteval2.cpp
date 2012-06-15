
void foo(int a, int b)
{
  int res  = a;

  if (a || ((b > 0) && (a < 0)))
  {
    res = res * 2;
  }

  ++res;
}

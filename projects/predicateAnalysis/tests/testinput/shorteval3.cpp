
void foo(int a, int b)
{
  int res  = a;

  if (a || (b > 0))
  {
    res = res * 2;
  }
  else
  {
    ++res;
  }
}

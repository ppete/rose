void foo(int *p)
{
  int res = 0;

  if (int *x = p)
  {
    ++res;
  }
}

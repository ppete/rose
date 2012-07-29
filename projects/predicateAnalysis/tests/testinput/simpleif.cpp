void foo(int a, int b)
{
  int res = 0;

  for (; a && (b > 0); ++b)
  {
    ++res;
  }
}


void foo(int a, int b, int c, int y, int z)
{
  for (; c > 0; --c)
  {
    for (; a && (b > 0); --b)
    {
      y = y * 2;
    }
  }

  ++z;
}

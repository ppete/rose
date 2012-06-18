
int foo(int pos, const char* in, char* out)
{
  int i = 0;

  for (; i < pos; ++i)
  {
    out[i] = in[i];
  }

  out[i] = 0;
}

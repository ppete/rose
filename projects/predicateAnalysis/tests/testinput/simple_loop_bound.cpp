
void cpstr(int sz, char* out, char* in)
{
  int i = 0;

  for (; i < sz; ++i)
  {
    out[i+0] = in[i+0];
  }

  out[i+0] = 0;
}

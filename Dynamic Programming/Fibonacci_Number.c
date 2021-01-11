int fibo(int n)
{
  fibodata[0] = 0;
  fiboData[1] = 1;
  for (int i=2; i<=n; i++)
    fiboData[i] = fiboData[i - 1] + fiboData[i - 2];
  return fiboData[n];
}

s;k;i;
main(n,t)
{
  for(scanf("%d",&t);t--;)
  {
    scanf("%d",&n);
    k&&k<n?(k=n):(i=k=n);
    s=s<k-i?k-i:s;
  }
  printf("%d",s);
}

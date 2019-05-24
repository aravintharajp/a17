int arms(int,int);
void main()
{
int i,n,a,c=0;
scanf("%d",&n);
if(n<=0)
{
printf("Invalid");
exit(1);
}
i=arms(n,c);
if(i==1)
{
 printf("yes");
}
else
{
 printf("no");
}
}
int arms(int x,int z)
{
  int t=0,t1,s,n;
  s=x;
  while (s != 0)
    {
        s /= 10;
	      ++n;
    }
    s=x;
  while(s!=0)
  {
        t1= s%10;
        t += pow(t1, n);
        s /= 10;
  }
  if(x==t)
  ++z;
  return z;
}

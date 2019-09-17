 #include <cstdio>
#include <cstdlib>
int count1(int n)
{
 int ct=0;
 while(n>0)
   {
      if (n%10==7)
        ct++;
      n/=10;
   }
  return ct;
}
int main()
{
   int i,n,ct=0;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
     ct+=count1(i);
   printf("%d\n",ct);
        return 0;
}

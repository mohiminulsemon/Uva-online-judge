#include<stdio.h>
int main()
{
  long long int t,i,a,n,s,d;
  while(scanf("%lld",&a)!=EOF)
  {
    if(a==0) break;
    n=a;
    while(1)
    {
        s=0;
        while(n!=0)
        {
          d=n%10;
          s+=d;
          n=n/10;
        }
        n=s;
        if(n<=9) break;
    }
      printf("%lld\n",n);

  }

 return 0;
}

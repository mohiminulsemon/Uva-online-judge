#include<stdio.h>
int main()
{
  long long int t,i,a,n,s,d;
  scanf("%lld",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%lld",&a);
    n=a;
    while(1)
    {
        s=0;
        while(n!=0)
        {
          d=n%10;
          s+=d*d;
          n=n/10;
        }
        n=s;
        if(n<=9) break;
    }
      if(n==1 || n==7) printf("Case #%lld: %lld is a Happy number.\n",i,a);
      else printf("Case #%lld: %lld is an Unhappy number.\n",i,a);
  }

 return 0;
}

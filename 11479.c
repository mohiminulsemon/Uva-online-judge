#include<stdio.h>
int main()
{
  long long int n,a,b,c,i;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%lld %lld %lld",&a,&b,&c);
     if(a+b>c && a+c>b && b+c>a)
     {
      if(a==b && a==c) printf("Case %lld: Equilateral\n",i);
      else if(a==b && a!=c || a==c && a!=b || c==b && a!=c) printf("Case %lld: Isosceles\n",i);
      else if(a!=b && a!=c || b!=c && a!=b || c!=b && a!=c) printf("Case %lld: Scalene\n",i);
     }
     else  printf("Case %lld: Invalid\n",i);
  }
 return 0;
}

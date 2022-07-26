#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,t,s;
  while(scanf("%d%d",&a,&b)==2)
  {
      if(a==0 && b==0) break;
      c=0;
      s=0;
      if(a>b)
      {
          t=a;
          a=b;
          b=t;
      }
      while(a<=b)
      {
          s=sqrt(a);
          if(s*s==a)
            c++;
            a++;
      }
      printf("%d\n",c);
  }

 return 0;
}

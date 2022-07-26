#include<stdio.h>
int main()
{
  int t,n,a,b,i,c,d,e,h,f,g,j,max;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
    scanf("%d %d:%d",&n,&a,&b);
    f=a*60+b;
     max=5000;
     for(j=1;j<=n;j++)
     {
         scanf("%d:%d %d",&c,&d,&e);
          g=c*60+d;
          if(g>=f)
          {
          h=g+e-f;
          }
          else
          {
              h=(24*60+g)+e-f;
          }
          if(h<max)
          {
              max=h;
          }
     }
     printf("Case %d: %d\n",i,max);
  }

 return 0;
}

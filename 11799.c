#include<stdio.h>

int main()
{
    int t,i,n,m,a,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        m=0;
        scanf("%d",&n);
          for(j=1;j<=n;j++)
          {
              scanf("%d",&a);
              if(a>m)
              {
                  m=a;
              }
          }
          printf("Case %d: %d\n",i,m);

    }
return 0;
}

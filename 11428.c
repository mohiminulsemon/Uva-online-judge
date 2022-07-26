#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,n,m,count,x;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        m=n;
        l=sqrt(m);
        for(i=1; i<=l; i++)
        {
            count=1;
            for(j=0; j<=i-1; j++)
            {
               x=(i*i*i)-(j*j*j);
               if(x==n)
               {
                   count=0;
                   break;
               }
            }
            if(count==0)
                break;
        }
        if(count==0)
      printf("%d %d\n",i,j);
      else
        printf("No solution\n");
    }

return 0;
}

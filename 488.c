#include <stdio.h>
int main()
{
    int n,i,j,t,p,k,l;
    scanf("%d",&t);
    for(l=1;l<=t;l++)
    {
    scanf("%d %d",&n,&p);
    for(k=1;k<=p;k++)
    {
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
     for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
     if(l==t && k==p)
    break;
    printf("\n");
    }
    }
    return 0;
}

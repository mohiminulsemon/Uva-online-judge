#include<stdio.h>
int main()
{
    int n,a,b,i,s,j=75;
    while(j--)
    {
        scanf("%d",&n);
        if(n==0) break;
        s=0;
        b=0;
    for(i=1;i<=n;i++)
     {
        scanf("%d",&a);
        if(a>=1 && a<=99)
            s++;
        else if(a==0)
            b++;
     }
     printf("Case %d: %d\n",75-j,s-b);
    }
return 0;
}

#include<stdio.h>
int main()
{
    int T,n,i,r;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        n=n/10;
        r=n%10;
        if(r<0)
            {
                r=r*(-1);
            }
        printf("%d\n",r);
    }
        return 0;
}

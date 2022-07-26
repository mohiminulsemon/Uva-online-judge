#include<stdio.h>
int main()
{
    int T,i,a,b,j,sum,t;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        sum=0;
        scanf("%d %d",&a,&b);
        if(b<a)
        {
            t=b;
            b=a;
            a=t;
        }
        if(a%2==0)
        {
            a=a+1;
            for(j=a;j<=b;j=j+2)
                sum=sum+j;
        }
        else
        {
            for(j=a;j<=b;j=j+2)
                sum=sum+j;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

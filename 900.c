#include<stdio.h>
int main()
{
    long long int n,f[61],i;
    f[2]=2;
    f[1]=1;
    while(scanf("%lld",&n)==1 && n!=0)
    {
        if(n==1) f[1]=1;
        else if(n==2) f[2]=2;
        else {
                for(i=3;i<=50;i++)
                 {
                   f[i]=f[i-2]+f[i-1];
                 }
             }
        printf("%lld\n",f[n]);
    }
return 0;
}


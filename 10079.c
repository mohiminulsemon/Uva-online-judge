#include <stdio.h>
int main()
{
    long long int n,a;
    while(scanf("%lld",&n)==1)
    {
        if(n<0) break;
        a=(((n+1)*n)/2)+1;
        printf("%lld\n",a);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int t,i,m,n,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&n,&m);
        s=(n/3)*(m/3);
        printf("%d\n",s);
    }
return 0;
}

#include<stdio.h>
int main()
{
    int n,a,b,i;
    scanf("%d\n",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a,&b);
         if (a<b)
            printf("<\n");
         else if (a>b)
            printf(">\n");
         else
            printf("=\n");
    }
    return 0;
}

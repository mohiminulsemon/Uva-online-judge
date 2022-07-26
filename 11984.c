
#include<stdio.h>
int main()
{
    int i,n;
    float C,F,c,d;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
    {
       scanf("%f %f",&c,&d);
       F=(9*c/5)+32+d;
       C=5*(F-32)/9;
       printf("Case %d: %.2f\n",i,C);
    }

    return 0;
}

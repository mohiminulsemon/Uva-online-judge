#include<stdio.h>
int main()
{
    int n,i,a,b,c,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(a+b+c>=d && a+d+c>=b && a+b+d>=c && d+b+c>=a)
        {
            if(a==b && a==c && a==d)
            {
                printf("square\n");
            }
            else if(a==c && b==d || a==b && c==d || a==d && b==c)
            {
                printf("rectangle\n");
            }
            else printf("quadrangle\n");
        }
        else printf("banana\n");
    }
 return 0;
}

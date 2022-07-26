#include<stdio.h>
int main()
{
    int a,b,c,e,f,d;
    while(scanf("%d %d %d",&a, &b, &c)==3)
{
        e=a*a;
        f=b*b;
        d=c*c;
        if(a!=0 || b!=0 || c!=0)
           {
            if (d==e+f)
                printf("right\n");
            else if(f==e+d)
                printf("right\n");
            else if(e==f+d)
                printf("right\n");
            else
                printf("wrong\n");
        }
         {
             if(a==0&&b==0&&c==0)
                    break;
        }

        }return 0;
        }

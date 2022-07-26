#include<stdio.h>
int main()
{
    int a,b,c,max,n,t,d,e,f;
    while(scanf("%d %d",&a,&b)==2)
    {
        e=a;
        f=b;
        max=0;
        if(e>f)
        {
           d=e;
           e=f;
           f=d;
        }
        t=e;
        while(t<=f)
        {
            n=t;
            c=1;
            while(n!=1)
            {
               if(n%2==0)
               {
                   n/=2;
               }
               else
               {
                   n=3*n+1;
               }
               c++;
            }
            if(max<c)
                max=c;
            t++;

        }

        printf("%d %d %d\n",a,b,max);
    }

    return 0;
}

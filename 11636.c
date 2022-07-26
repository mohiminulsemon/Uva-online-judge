#include<stdio.h>

int main()
{
    int n,c,i,p=0;
    while(scanf("%d",&n)==1)
    {
        if(n<0) break;
        c=0;
        i=1;
        p++;
        while(i<n)
        {
            c++;
            i=i*2;
        }
        printf("Case %d: %d\n",p,c);
    }
   return 0;
}

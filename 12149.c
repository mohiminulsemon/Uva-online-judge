#include<stdio.h>
int main()
{
        int i,s,n;
        while(scanf("%d",&n)==1 && n!=0)
        {
            s=0;
            while(n!=0)
            {
                s+=n*n;
                n--;
            }
            printf("%d\n",s);
        }

 return 0;
}

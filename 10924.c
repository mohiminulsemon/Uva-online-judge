#include<stdio.h>
#include<string.h>
int main()
{
int i,l,sum,n,p,j;
char c[100];
while(gets(c))
    {
    sum=0;
    l=strlen(c);
    for(i=0;i<l;i++)
        {
        if(c[i]>='a'&&c[i]<='z')
        {
        n=(c[i])-96;
        sum=sum+n;
        }
        else
        {
        n=(c[i])-38;
        sum=sum+n;
        }
    }
        p=1;
        for(j=2; j<sum ; j++)
        {
            if(sum%j==0)
            {
                p=0;
                break;
            }
        }
        if(p==1)
            printf("It is a prime word.\n");

        else if(p==0)
            printf("It is not a prime word.\n");
    }
    return 0;
}

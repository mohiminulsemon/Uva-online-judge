#include<stdio.h>
#include<string.h>
int main()
{
    int t=0;
    char s[10];
    while(scanf("%s",&s)==1 && s[0]!='*')
    {
        if(strcmp(s,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",++t);
        else
            printf("Case %d: Hajj-e-Asghar\n",++t);
    }
return 0;
}


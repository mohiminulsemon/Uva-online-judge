#include<stdio.h>
#include<string.h>
int main()
{
    int t=0;
    char s[100];
    while(scanf("%s",&s)==1 && s[0]!='#')
    {
        if(strcmp(s,"HELLO")==0)
            printf("Case %d: ENGLISH\n",++t);
        else if(strcmp(s,"HOLA")==0)
            printf("Case %d: SPANISH\n",++t);
        else if(strcmp(s,"HALLO")==0)
            printf("Case %d: GERMAN\n",++t);
        else if(strcmp(s,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",++t);
        else if(strcmp(s,"CIAO")==0)
            printf("Case %d: ITALIAN\n",++t);
        else if(strcmp(s,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",++t);
        else
            printf("Case %d: UNKNOWN\n",++t);
    }
return 0;
}

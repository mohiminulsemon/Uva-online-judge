#include <stdio.h>
#include <string.h>

int main ()
{
    int n,s=0,d=0,i;
    char a [100];
    scanf ("%d",&n);
    for(i=1;i<=n;i++)
     {
        scanf ("%s", a);
        if (strcmp (a,"donate")==0)
        {
            scanf ("%d",&d);
            s += d;
        }
        else
        printf ("%d\n",s);
    }

    return 0;

}

#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char a[100];
    while(scanf("%s",&a))
    {
     long int l,d,s=0,i=1;
     l=strlen(a);
    while(1)
    {
        d=a[l-1]-48;
        s += d*(pow(2,i)-1);

        if(l-1==0)
            break;
        ++i;
        l--;
    }
     if(s==0)
        break;
      printf("%ld\n",s);
    }
return 0;
}

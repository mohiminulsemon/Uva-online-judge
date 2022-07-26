#include<stdio.h>
int main()
{
  int i,a,s,b,j;
  while(scanf("%d %d",&a,&b)!=EOF)
  {
    s=0;
    for(i=1;i<=a;i++)
    {
        s++;
        for(j=1;j<b;j++)
        {
            s++;
        }
    }
    printf("%d\n",s-1);
  }

 return 0;
}

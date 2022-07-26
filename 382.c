#include<stdio.h>
int main()
{
    int n,i,s;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n)==1)
    {
      if(n==0)
      {
          printf("END OF OUTPUT\n");
          break;
      }
      s=0;
      i=1;
      while(i<=n/2)
      {
        if(n%i==0)
        {
            s+=i;
        }
        i++;
      }
      if(s==n) printf("%5d  PERFECT\n",n);
      else if(s>n) printf("%5d  ABUNDANT\n",n);
      else printf("%5d  DEFICIENT\n",n);
    }
return 0;
}

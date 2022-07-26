#include<stdio.h>
int main()
{
    int n,i,j,t;
    while(scanf("%d",&n) && n != 0)
    {
      int a[n];
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }

    for (i = 1 ; i<=n - 1; i++) {
    j = i;

    while ( j > 0 && a[j-1] > a[j]) {
      t          = a[j];
      a[j]   = a[j-1];
      a[j-1] = t;

      j--;
    }
  }
    for(i=0;i<n;i++)
      {
        printf("%d ",a[i]);
      }
      printf("\n");
    }
    return 0;
}

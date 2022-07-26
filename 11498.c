#include<stdio.h>
int main()
{
    int t,i,m,n,x,y;
    while(scanf("%d",&t)==1 && t!=0)
    {
        scanf("%d%d",&n,&m);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&x,&y);
        x=x-n;
        y=y-m;
        if(x==0 || y==0) printf("divisa\n");
        else if(x>0 && y>0) printf("NE\n");
        else if(x<0 && y>0) printf("NO\n");
        else if(x>0 && y<0) printf("SE\n");
        else if(x<0 && y<0) printf("SO\n");
    }
    }
return 0;
}

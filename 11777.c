#include<stdio.h>
int main()
{
    int i,n,t1,t2,f,p,a,b,c,t,s;
    scanf("%d\n",&n);

    for(i=1;i<=n;i++) {
            scanf("%d %d %d %d %d %d %d",&t1,&t2,&f,&p,&a,&b,&c);
            if(a<=b && a<=c) t=(b+c)/2;
            else if( b<=a && b<=c ) t=(a+c)/2;
            else t=(a+b)/2;
            s=t1+t2+f+p+t;
            if(s>=90) printf("Case %d: A\n",i);
            else if(s<90 && s>=80) printf("Case %d: B\n",i);
            else if(s<80 && s>=70) printf("Case %d: C\n",i);
            else if(s<70 && s>=60) printf("Case %d: D\n",i);
            else printf("Case %d: F\n",i);
            }
    return 0;
}


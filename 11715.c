#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    double u,v,t,a,s;

    for(i=1; ;i++)
    {
        scanf("%d\n",&n);
       if(n==0)
        {
            break;
        }
        if(n==1)
        {
            scanf("%lf %lf %lf",&u, &v,&t);
            a=(v-u)/t;
            s=((u+v)*t)/2;
            printf("Case %d: %0.3lf %0.3lf\n",i,s,a);
        }
         else if(n==2)
        {
            scanf("%lf %lf %lf",&u, &v,&a);
            t=(v-u)/a;
            s=((u+v)*t)/2;
            printf("Case %d: %0.3lf %0.3lf\n",i,s,t);
        }
         else if(n==3)
        {
            scanf("%lf %lf %lf",&u, &a,&s);
            v=sqrt(u*u+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",i,v,t);
        }
        else if(n==4)
        {
            scanf("%lf %lf %lf",&v, &a,&s);
            u=sqrt(v*v-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %0.3lf %0.3lf\n",i,u,t);
        }
        }
  return 0;

}

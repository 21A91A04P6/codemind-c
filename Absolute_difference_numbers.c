#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,s,e,r,c=0,d=0,g=0,f,t,x;
        scanf("%d%d",&a,&b);
        x=pow(10,b);
        t=a;
        s=a%x;
        while(t!=0){
            r=t%10;
            d=d*10+r;
            t=t/10;
        }
        e=d%x;
        while(e!=0)
        {
            f=e%10;
            g=g*10+f;
            e=e/10;
        }
        c=abs(g-s);
        printf("%d",c);
}
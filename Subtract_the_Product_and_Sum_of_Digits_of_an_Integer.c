#include<stdio.h>
int main()
{
    int i,n,r,s,sum=0,p=1;
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
    }
    s=p-sum;
    printf("%d",s);
}
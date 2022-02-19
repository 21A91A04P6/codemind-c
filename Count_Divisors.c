#include<stdio.h>
int main()
{
    int n,k,l,i,count=0;
    scanf("%d%d%d",&n,&k,&l);
    
    for(i=n;i<=k;i++)
    {
        if(i%l==0)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
#include<stdio.h>
int main()
{
    int n,r,o_count=0,e_count=0;
    scanf("%d",&n);
    while(n>0)
    {
    r=n%10;
    if(r%2==0)
    {
        e_count++;
    }
    else
    {
        o_count++;
    }
    n=n/10;
    }
    if(o_count==0)
    {
        printf("Even");
    }
    else if(e_count==0)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,r,rev=0,temp;
        scanf("%d",&n);
        temp=n;
        while(n>0)
        {
            r=n%10;
            rev=rev*10+r;
            n=n/10;
        }
        if(temp==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
        
    }
}
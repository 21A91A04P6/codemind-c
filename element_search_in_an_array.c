#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    int b;
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(b==a[i])
        {
            printf("True");
            break;
        }
    }
    if(b!=a[i])
    {
        printf("False");
    }
}
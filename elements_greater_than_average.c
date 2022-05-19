#include<stdio.h>
int main()
{
    int n,sum=0,i, avg,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
   if(a[i]>=avg)
   {
       count++;
   }
    }
    printf("%d",count);
    return 0;
}
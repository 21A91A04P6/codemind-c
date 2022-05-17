#include<stdio.h>
int main()
{
	int n,avg;
	float sum=0;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    	for(i=0;i<n;i++)
	{
     sum=sum+a[i];
}
    printf("%0.2f",sum/n);
}
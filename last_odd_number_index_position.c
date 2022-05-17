#include<stdio.h>
int main()
{
	int n,odd;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    	for(i=0;i<n;i++)
	{
    if(a[i]%2!=0)
    {
    	odd=i;
	} 
}
    printf("%d",odd);
}
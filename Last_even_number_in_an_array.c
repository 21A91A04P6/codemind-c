#include<stdio.h>
int main()
{
	int n,even;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    	for(i=0;i<n;i++)
	{
    if(a[i]%2==0)
    {
    	even=a[i];
	} 
}
    printf("%d",even);
}
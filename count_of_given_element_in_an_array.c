#include<stdio.h>
int main()
{
	int n,a,count=0;
	scanf("%d",&n);
	int c[n],i;
	for(i=0;i<n;i++)
	{
	scanf("%d",&c[i]);
    }
    scanf("%d",&a);
    	for(i=0;i<n;i++)
	{
    if(c[i]==a)
    {
    	count++;
	} 
}
    printf("%d",count);
}
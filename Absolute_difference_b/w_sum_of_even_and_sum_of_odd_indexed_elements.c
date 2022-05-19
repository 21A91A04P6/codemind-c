#include<stdio.h>
int main()
{
	int n,osum=0,esum=0;
	scanf("%d",&n);
	int a[n],i,sub;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
    	for(i=0;i<n;i++)
	{
    if(i%2!=0)
    {
    	osum=osum+a[i];
	} 
	else
	{
	    esum=esum+a[i];
	}
}
sub=esum-osum;
    printf("%d",sub);
}
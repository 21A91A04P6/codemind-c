#include<stdio.h>
int main()
{
	int rs,cs;
	scanf("%d%d",&rs,&cs);
	int i,j,a[rs][cs],sum=0,num=0;
	for(i=0;i<rs;i++)
	{
	    for(j=0;j<cs;j++)
	    {
           scanf("%d",&a[i][j]);
	    }
    }
    for(i=0;i<rs;i++)
    {
    	for(j=0;j<cs;j++)
    	{
    	    if(a[i][j]%2==0)
    	    {
    		sum=sum+a[i][j];
    	    }
    	    else
    	    {
    	        num=num+a[i][j];
    	    }
		}
		
	
	}
		printf("%d %d",sum,num);
	
	 return 0;
}
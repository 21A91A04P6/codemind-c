#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
if(a>50 and b>60 and c>100)
    printf("10");
else if(a>50 and b>60)
    printf("9");
else if(b>60 and c>100)
    printf("8");
else if(a>50 and c>100)
    printf("7");
else if(a>50 or b>60 or c>100)
    printf("6");
else
    printf("5");
}
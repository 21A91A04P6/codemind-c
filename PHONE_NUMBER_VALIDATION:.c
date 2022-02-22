#include<stdio.h>
#include<string.h>
int main()
{
    char p[20];
    int t;
    scanf("%s",p);
    t=strlen(p);
    if(t==10)
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}
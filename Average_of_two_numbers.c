#include<stdio.h>
int main()
{
    float a,b;
    scanf("%f%f",&a,&b);
    float c;
    c=(a+b)/2;
    printf("Average of %0.0f and %0.0f is: %0.2f",a,b,c);
}
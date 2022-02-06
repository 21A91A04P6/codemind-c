#include<stdio.h>
int main()
{
    int L,B,W,C,A,cf;
    scanf("%d%d%d%d",&L,&B,&W,&C);
    if(L<=W+W||W+W>=B)
    {
        printf("Impossible");
    }
    else
    {
        A=(L*B)-((L-2*W)*(B-2*W));
        cf=A*C;
        printf("%d",cf);
    }
return 0;
}
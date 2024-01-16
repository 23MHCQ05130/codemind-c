#include<stdio.h>
int main()
{
    int r,N,i,dc=0;
    scanf("%d",&N);
    while(N!=0)
    {
        r=N%10;
        dc=dc+1;
        N=N/10;
    }
    printf("%d",dc);
}
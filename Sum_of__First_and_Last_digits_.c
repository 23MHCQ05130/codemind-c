#include<stdio.h>
int main()
{
    int x,y,n,sum=10;
    scanf("%d",&n);
    y=n%10;
    while(n>10)
    {
        n/=10;
    }
    x=n;
    sum=x+y;
    printf("%d",sum);
}
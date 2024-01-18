#include<stdio.h>
int main()
{
    int n,r,rev=0,t;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        rev=rev*10+r;
        t=t/10;
    }
    if(n==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
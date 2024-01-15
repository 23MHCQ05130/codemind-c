#include<stdio.h>
int main()
{
    float X,Y,a;
    scanf("%f %f",&X,&Y);
    a=Y-X;
    printf("%.2f",(a/X)*100.00);
}
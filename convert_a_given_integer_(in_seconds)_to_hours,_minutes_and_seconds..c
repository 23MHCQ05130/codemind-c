#include<stdio.h>
int main()
{
    int s,hrs,sec,min;
    scanf("%d",&s);
    hrs=s/3600;
    s=s-(hrs*3600);
    min=s/60;
    sec=s%60;
    printf("H:M:S-%d:%d:%d",hrs,min,sec);
}
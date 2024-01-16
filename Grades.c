#include<stdio.h>
int main()
{
    int p,c,b,m,s,t,pp;
    scanf("%d %d %d %d %d",&p,&c,&b,&m,&s);
    t=p+c+b+m+s;
    pp=t/5;
    scanf("%d",&pp);
    if(pp>=90)
    printf("Grade A");
    else if(pp>=80)
    printf("Grade B");
    else if(pp>=70)
    printf("Grade C");
    else if(pp>=60)
    printf("Grade D");
    else if(pp>=40)
    printf("Grade E");
    else if(pp<40)
    printf("Grade F");
}
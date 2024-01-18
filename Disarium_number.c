#include<stdio.h>
#include<math.h>
int countdigits(int num)
{
    int count=0;
    while(num!=0)
    {
        count++;
        num/=10;
    }
    return count;
}
int isdisarium(int num)
{
    int originalnum=num;
    int sum=0;
    int digits=countdigits(num);
    while(num>0)
    {
        int digit=num%10;
        sum+=pow(digit,digits);
        digits--;
        num/=10;
    }
    return(sum==originalnum);
}
int main()
{
    int num;
    scanf("%d",&num);
    if(isdisarium(num))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
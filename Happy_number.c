#include <stdio.h>
#include<stdbool.h>
int happyfun(int n)
{   
    int newnum = 0;
    while(n != 0)
    {
        int ld = n % 10;
        newnum+=(ld * ld); // 5
        n/=10;
    }
    return newnum;
}
bool flag =0;
int main() {
    // Write C code here
    int n;
    scanf("%d",&n);
    while((n != 1) ||(n != 7))
    {
    int happy = happyfun(n);
    n = happy;
    if(n == 1 || n == 7)
    {
        flag = 1;
        break;
    }
    else if(n<10)
    {
        flag = 0;
        break;
    }
    }
    if (flag == 1) printf("True");
    else printf("False");
    return 0;
}
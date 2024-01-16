#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    if(s1>34&&s2>34&&s3>34&&s4>34&&s5>34)
    {
        printf("PASSED");
    }
    else
    printf("FAILED");
}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],s=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    float avg=(float)s/n;
    printf("%.2f",avg);
        
    
}
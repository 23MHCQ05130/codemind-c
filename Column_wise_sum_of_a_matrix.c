#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    int a[N][M],i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int s=0;
    
    for(i=0;i<M;i++)
    {
        s=0;
        for(j=0;j<N;j++)
        {
            s=s+a[j][i];
            
        }
        printf("%d ",s);
        
    }
    
}
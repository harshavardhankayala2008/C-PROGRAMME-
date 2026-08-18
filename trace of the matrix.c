#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n,trace=0;
    printf("enter the no.of rows");
    scanf("%d",&m);
    printf("enter the no.of coloums");
    scanf("%d",&n);
    printf("enter the matrix elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(i==j)
            {
                trace=trace+a[i][j];
            }
        }
    }
    printf("trace of the matrix a is %d",trace);
    return 0;
}

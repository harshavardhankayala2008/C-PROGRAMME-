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
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int a[10][10],i,j,m,n;
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
    return 0;
}

#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,k,l;
    printf("enter the no.of rows");
    scanf("%d",&m);
    printf("enter the no.of coloums");
    scanf("%d",&n);
    printf("enter the matrix a elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
     printf("enter the no.of rows");
    scanf("%d",&k);
    printf("enter the no.of coloums");
    scanf("%d",&l);
    printf("enter the matrix b elements");
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=0;j<l;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    if((m==k)&&(n==l))
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("addition is not possible");
    }
   return 0;
}

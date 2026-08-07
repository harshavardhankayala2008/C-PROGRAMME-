#include<stdio.h>
int main()
{
    int a[10],n,i,j,b[10];
    printf("enter no of elements in array");
    scanf("%d",&n);
    printf("enter the elements in array");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-1,j=0;j<n;i--,j++)
    b[j]=a[i];
    printf("\n the reverse of the array");
    for(j=0;j<n;j++)
    printf(" %d ",b[j]);
    return 0;
}

#include<stdio.h>
int main()
{
    int n1,n2,i,j,a[10],b[10],c[20];
    printf("enter no of elements in array 1:");
    scanf("%d",&n1);
    printf("enter no of elements in array 2:");
    scanf("%d",&n2);
    printf("enter the array elements:");
    for(i=0;i<n1;i++)
    scanf("%d",&a[i]);
    printf("enter the array elements:");
    for(j=0;j<n2;j++)
    scanf("%d",&b[j]);
    for(i=0;i<n1;i++)
    c[i]=a[i];
    for(j=0;j<n2;i++,j++)
    c[i]=b[j];
    printf("the total array elements:");
    for(i=0;i<n1+n2;i++)
    printf(" %d ",c[i]);
    return 0;
}

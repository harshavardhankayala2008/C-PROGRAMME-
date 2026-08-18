#include<stdio.h>
int main()
{
    int a[10],i,n,pos,k;
    printf("enter the range of array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the position");
    scanf("%d",&pos);
    printf("enter the element");
    scanf("%d",&k);
    for(i=n;i>=pos;i--)
    a[i]=a[i-1];
    a[pos-1]=k;
    for(i=0;i<=n;i++)
    printf("%d ",a[i]);
    return 0;
}

#include<stdio.h>
int main()
{
    int a[10],n,i,pos;
    printf("enter any one number");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the position of element;");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    a[i]=a[i+1];
    printf("resultant array");
    for(i=0;i<n-1;i++)
    printf(" %d ",a[i]);
    return 0;
}

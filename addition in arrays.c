#include<stdio.h>
int main()
{
    int n1,n2,i,a[10],b[10],c[10];
    printf("enter no of elements in array 1:");
    scanf("%d",&n1);
    printf("enter no of elements in array 2:");
    scanf("%d",&n2);
    if(n1!=n2)
    {
        printf("addition is not possible:");
    }
    else
    {
        printf("enter the elements in array 1:");
        for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
        printf("enter the elements in array 2:");
        for(i=0;i<n1;i++)
        scanf("%d",&b[i]);
        for(i=0;i<n1;i++)
        c[i]=a[i]+b[i];
        printf("sum of the arrays:");
        for(i=0;i<n1;i++)
        printf(" %d ",c[i]);
    }
    return 0;
}

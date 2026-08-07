#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0;
    printf("enter any one number:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    if(a[i]>0)
    {
        sum=sum+a[i];
    }
    else
    {
        sum=sum-a[i];
    }
    printf("the sum of array elements is %d",sum);
    return 0;
}

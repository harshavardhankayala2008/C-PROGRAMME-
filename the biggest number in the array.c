#include<stdio.h>
int main()
{
    int n,a[10],i,big;
    printf("enter any one number:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    big=a[0];
    for(i=0;i<n;i++)
    if(a[i]>big)
    {
        big=a[i];
    }
    printf("the biggest number in the array is %d",big);
    return 0;
}

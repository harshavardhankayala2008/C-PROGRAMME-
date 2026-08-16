#include<stdio.h>
int main()
{
    int a[10],n,i,sum=0,*p;
    printf("enter the number of elements required in array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("\n %d",a[i]);
    p=&a[0];
    for(i=0;i<n;i++)
    sum=sum+*(p+i);
    printf("\nthe sum of array elements is %d",sum);
    return 0;
}

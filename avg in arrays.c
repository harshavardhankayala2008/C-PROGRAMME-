#include<stdio.h>
int main()
{
    int n,a[10],sum=0,i;
    float avg;
    printf("enter any one number");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    sum=sum+a[i];
    printf("the sum of the array elemenets is %d\n",sum);
    avg=(float)sum/n;
    printf("the average is %f",avg);
    return 0;
}

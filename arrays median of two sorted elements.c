#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,m,n,c[20],k,sum=0,count;
    float median;
    printf("enter thee n value");
    scanf("%d",&n);
    printf("enter the array elements of a[i]");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter thee m value");
    scanf("%d",&m);
    printf("enter the array elements of b[i]");
    for(j=0;j<m;j++)
    scanf("%d",&b[j]);
    for(i=0;i<n;i++)
    {
        c[2*i]=a[i];
    }
    for(j=0;j<m;j++)
    {
        c[2*j+1]=b[j];
    }
    for(k=0;k<m+n;k++)
    printf("%d ",c[k]);
    count=m+n;
    printf("the total numbers entered is %d",count);
    for(k=0;k<count;k++)
    {
        sum=sum+c[k];
    }
    printf("\nthe sum of all integers is %d",sum);
    median=(sum/count);
    printf("\nthe median is %f",median);
    return 0;
}

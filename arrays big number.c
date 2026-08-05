#include<stdio.h>
int main()
{
    int n,big,a[10],i;
    printf("enter any one number:");
    scanf("%d",&n);
    printf("enter the %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    big=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>big)
        {
            big=a[i];
        }
        
    }
    printf("the biggest number is %d",big);
    return 0;
}

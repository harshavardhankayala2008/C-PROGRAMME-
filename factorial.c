#include<stdio.h>
int main()
{
    int n,fact=1,temp;
    printf("enter any one number:");
    scanf("%d",&n);
    temp=n;
    while(n>=1)
    {
        fact=fact*n;
        n--;
    }
    printf("the factorial of %d is %d",temp,fact);
    return 0;
}

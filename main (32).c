#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter any one number:");
    scanf("%d",&n);
    while(n>=1)
    {
        fact=fact*n;
        n--;
    }
    printf("the factorial of %d is %d",n,fact);
    return 0;
}
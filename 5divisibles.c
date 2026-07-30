#include<stdio.h>
int main()
{
    int n;
    printf("enter any one number:");
    scanf("%d",&n);
    if(n%5==0)
    {
        printf("the given number is divisible by 5:");
    }
    else
    {
        printf("the given number is not divisible by 5:");
    }
    return 0;
}

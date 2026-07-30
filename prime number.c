#include<stdio.h>
int main()
{
    int n,i=1,fact=0;
    printf("enter any one number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            fact=fact+1;
        }
        i++;
    }
    if(fact==2)
    {
        printf("the given number is prime:");
    }
    else
    {
        printf("the given number is not a prime number");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,sum=0,last;
    printf("enter any one number:");
    scanf("%d",&n);
    while(n>0)
    {
        last=n%10;
        sum=sum+last;
        n=n/10;
    }
    printf("\n the sum digits in a given number is %d",sum);
    return 0;
}
    

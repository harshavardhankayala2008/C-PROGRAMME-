#include<stdio.h>
int main()
{
    int n,rev=0,last,temp;
    printf("enter any one number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        last=n%10;
        rev=(rev*10)+last;
        n=n/10;
    }
    if(rev==temp)
    {
        printf("\n the entered number is palindrome:");
    }
    else
    {
        printf("\n the entered number is not a palindrome:");
    }
    return 0;
    
}

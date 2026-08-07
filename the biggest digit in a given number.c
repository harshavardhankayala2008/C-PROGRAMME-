#include<stdio.h>
int main()
{
    int n,big=0,last;
    printf("enter any one number:");
    scanf("%d",&n);
    while(n>0)
    {
        last=n%10;
        if(last>big)
        {
            big=last;
        }
        else
        {
            n=n/10;
        }
    }
    printf("the biggest digit in given number is %d",big);
    return 0;
}

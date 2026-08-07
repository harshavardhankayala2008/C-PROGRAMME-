#include<stdio.h>
int main()
{
    int n,small=9,last;
    printf("enter any one number");
    scanf("%d",&n);
    while(n>0)
    {
        last=n%10;
        if(last<small)
        {
            small=last;
        }
        else
        {
            n=n/10;
        }
    }
    printf("the smallest number digit in a given number is %d",small);
    return 0;
}

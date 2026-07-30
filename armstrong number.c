#include<stdio.h>
int main()
{
    int n,last,sum=0,dup;
    printf("enter any one number:");
    scanf("%d",&n);
    dup=n;
    while(n>0)
    {
       last=n%10;
       sum=sum+(last*last*last);
       n=n/10;
    }
    if(sum==dup)
    {
        printf("the armstrong number is%d",sum);
    }
    else
    {
         printf("this is not a armstrong number is%d",sum);
    }
    return 0;
}

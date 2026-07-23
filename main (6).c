#include<stdio.h>
int main()
{
    float bc,bill;
    printf("enter the book cost:");
    scanf("%f",&bc);
    if(bc>=1000)
    {
        bill=(bc-(bc*60/100));
        printf("the bill is %f",bill);
    }
    else
    {
        bill=bc;
        printf("the bill is %f",bill);
    }
    return 0;
}
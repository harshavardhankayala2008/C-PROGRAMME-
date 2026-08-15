#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q,*t;
    printf("enter any two numbers:");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping");
    p=&a;
    q=&b;
    printf("\nthe value of a is %d",*p);
    printf("\nthe value of b is %d",*q);
    printf("\nafter swapping");
    t=&a;
    p=&b;
    q=t;
    printf("\nthe value of a is %d",*p);
    printf("\nthe value of b is %d",*q);   
    return 0;
}

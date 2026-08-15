#include<stdio.h>
int main()
{
    int a,b;
    int *p,*q;
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    printf("\nbefore swapping");
    p=&a;
    q=&b;
    printf("\na=%d\nb=%d",*p,*q);
    printf("\nafter swapping");
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("\na=%d\nb=%d",*p,*q);
    return 0;
}

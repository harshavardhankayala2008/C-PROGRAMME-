#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("enter any two numbers");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("\nthe address of a is %d",p);
    printf("\nthe address of b is %d\n",q);
    if(p<q)
    {
        printf("the biggest address is %d",q);
    }
    else
    {
        printf("the biggest address is %d",p);
    }
    return 0;
}

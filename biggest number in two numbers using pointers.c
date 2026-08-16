#include<stdio.h>
int main()
    {
        int a,b,*p,*q;
        printf("enter any two numbers:");
        scanf("%d%d",&a,&b);
        p=&a;
        q=&b;
        if(*p<*q)
        {
            printf("the biggest number is %d",*q);
        }
        else
        {
            printf("the biggest number is %d",*p);
        }
        return 0;
    }

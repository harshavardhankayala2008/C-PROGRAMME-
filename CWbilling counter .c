#include<stdio.h>
int main()
{
    int p1,p2,p3,p4,b1,b2,b3,b4,q1,q2,q3,q4,bill;
    printf("enter the prices of every object:");
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    printf("enter the quantity :");
    scanf("%d%d%d%d",&q1,&q2,&q3,&q4);
    b1=p1*q1;
    b2=p2*q2;
    b3=p3*q3;
    b4=p4*q4;
    bill=b1+b2+b3+b4;
    printf("the each bill %d,%d,%d,%d\nthe total bill is %d ",b1,b2,b3,b4,bill);
    return 0;
}

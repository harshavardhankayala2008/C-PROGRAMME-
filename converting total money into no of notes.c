#include<stdio.h>
int main()
{
    int fh,th,h,f,tw,t,change,ta;
    printf("enter the total amount:");
    scanf("%d",&ta);
    fh=ta/500;
    ta=ta%500;
    th=ta/200;
    ta=ta%200;
    h=ta/100;
    ta=ta%100;
    f=ta/50;
    ta=ta%50;
    tw=ta/20;
    ta=ta%20;
    t=ta/10;
    change=ta%10;
    printf("no.of 500=%d\nno.of 200=%d\nno.of 100=%d\nno.of 50=%d\nno.of 20=%d\nno.of 10=%d\nchange=%d",fh,th,h,f,tw,t,change);
    return 0;
}

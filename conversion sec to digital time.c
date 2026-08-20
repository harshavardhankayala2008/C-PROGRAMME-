#include<stdio.h>
int main()
{
    int h,m,s,ts;
    printf("enter the total seconds");
    scanf("%d",&ts);
    h=ts/3600;
    m=(ts%3600)/60;
    s=(ts%3600)%60;
    printf("%dH:%dM:%dsec",h,m,s);
    return 0;
}

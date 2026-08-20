#include<stdio.h>
int main()
{
    int tc,ng,rc;
    printf("total no.of chocolates\n enter no.of groups");
    scanf("%d%d",&tc,&ng);
    rc=tc%ng;
    printf("the no.of groups=%d\nremaining chocolates=%d",ng,rc);
    return 0;
}

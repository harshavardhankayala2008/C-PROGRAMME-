#include<stdio.h>
int main()
{
    int td,wk,rd;
    printf("enter no of days");
    scanf("%d",&td);
    wk=td/7;
    rd=td%7;
    printf("the no.of weeks=%d\nno.of remaining days=%d",wk,rd);
    return 0;
}

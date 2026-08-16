#include<stdio.h>
int main()
{
    int r,c,ts,mr,pec;
    printf("enter the no.of rows & colums");
    scanf("%d%d",&r,&c);
    ts=r*c;
    printf("\nthe total chairs is %d",ts);
    printf("\nenter the cost of each chair");
    scanf("%d",&pec);
    mr=ts*pec;
    printf("maximum revenue is %d",mr);
    return 0;
}

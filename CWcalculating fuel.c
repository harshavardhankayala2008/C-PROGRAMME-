#include<stdio.h>
int main()
{
    float distance,pcost,milage,totalcost;
    printf("enter the distance&pcost&milage");
    scanf("%f%f%f",&distance,&pcost,&milage);
    totalcost=(distance/milage)*pcost;
    printf("the totalcost for the distance is %f",totalcost);
    return 0;
}

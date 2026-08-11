#include<stdio.h>
int main()
{
    int d1,d2;
    float area;
    printf("enter the diagonals ofrhombus: ");
    scanf("%d%d",&d1,&d2);
    area=0.5*d1*d2;
    printf("the area of the rhombus is %d",area);
    return 0;
}

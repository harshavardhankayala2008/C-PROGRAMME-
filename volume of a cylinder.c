/*volume of cylinder*/
#include<stdio.h>
#include<math.h>
int main()
{
    float pi=3.141,r,h,volume;
    printf("enter the values of r&h");
    scanf("%f%f",&r,&h);
    volume=pi*r*r*h;
    printf("the volume of the cylinder is %f",volume);
    return 0;
}

#include<stdio.h>
#include<math.h>
int main()
{
    float r,pi=3.141,volume;
    printf("enter the radius of sphere:");
    scanf("%f",&r);
    volume=pi*0.66*pow(r,3);
    printf("the volume of the sphere is %f",volume);
    return 0;
}

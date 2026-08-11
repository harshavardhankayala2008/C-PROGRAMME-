/*total surface area od acone*/
#include<stdio.h>
#include<math.h>
int main()
{
    float r,h,l,pi=3.141,tsa;
    printf("enter the values of r&h:");
    scanf("%f%f",&r,&h);
    l=sqrt(pow(r,2)+pow(h,2));
    tsa=pi*r*(r+l);
    printf("the total surface area of a cone is %f",tsa);
    return 0;
}

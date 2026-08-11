/*volume of hexagonal prism*/
#include<stdio.h>
#include<math.h>
int main()
{
    float s,h,volume;
    printf("enter the values of s&h");
    scanf("%f%f",&s,&h);
    volume=3*sqrt(3)*pow(s,2)*h;
    printf("the volume of hexagonalprism is %f",volume);
    return 0;
}

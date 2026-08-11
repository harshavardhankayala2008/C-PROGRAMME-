/*tsa of a cuboid*/
#include<stdio.h>
#include<math.h>
int main()
{
    float l,b,h,tsa;
    printf("enter the values of l,b&h");
    scanf("%f%f%f",&l,&b,&h);
    tsa=2*(l*b+b*h+h*l);
    printf("the total surface area of a cuboid%f",tsa);
    return 0;
}

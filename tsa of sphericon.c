/*tsa of sphericon*/
#include<stdio.h>
#include<math.h>
int main()
{
    float r,pi=3.141,tsa;
    printf("enter the radius:");
    scanf("%f",&r);
    tsa=2*sqrt(2)*pow(r,2)*pi;
    printf("the tsa of sphericon is %f",tsa);
    return 0;
}

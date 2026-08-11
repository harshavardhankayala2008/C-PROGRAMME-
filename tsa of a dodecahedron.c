/*tsa of do decahedron*/
#include<stdio.h>
#include<math.h>
int main()
{
    float a,tsa;
    printf("enter the value of a");
    scanf("%f",&a);
    tsa=3*sqrt(25+10*sqrt(5))*pow(a,2);
    printf("the total surface area of a dodecahedron is %f",tsa);
    return 0;
}

/*tsa of cone furstum*/
#include<stdio.h>
#include<math.h>
int main()
{
    float pi=3.141,R,r,l,h,tsa;
    printf("enter the values of R,r,h");
    scanf("%f%f%f",&R,&r,&h);
    l=sqrt(pow(h,2)+pow((R-r),2));
    tsa=pi*(pow(r,2)+pow(r,2)+l*(R+r));
    printf("the tsa of cone furstum is %f",tsa);
    return 0;
}

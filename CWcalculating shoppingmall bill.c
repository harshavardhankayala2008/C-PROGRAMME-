#include<stdio.h>
int main()
{
    float ocost,discount,gst,totalprice;
    printf("enter the original cost&discount&gst");
    scanf("%f%f%f",&ocost,&discount,&gst);
    totalprice=(ocost-((ocost*discount)/100)+((ocost*gst)/100));
    printf("the totalcost=%f",totalprice);
    return 0;
}

#include<stdio.h>
int main()
{
    int mid1,mid2;
    float marks1,marks2,totalmarks;
    printf("enter the mid1&mid2 marks");
    scanf("%d%d",&mid1,&mid2);
    if(mid1>mid2)
    {
        marks1=(mid1*80)/100;
        marks2=(mid2*20)/100;
        totalmarks=marks1+marks2;
        printf("marks1=%f\nmarks2=%f",marks1,marks2);
        printf("totalmarks=%f",totalmarks);
    }
    else
    {
        marks1=(mid2*80)/100;
        marks2=(mid1*20)/100;
        totalmarks=marks1+marks2;
        printf("marks1=%f\nmarks2=%f",marks1,marks2);
        printf("totalmarks=%f",totalmarks);
    }
    return 0;
}

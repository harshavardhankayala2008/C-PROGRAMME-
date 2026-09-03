#include<stdio.h>
int main()
{
    int marks;
    float attendence;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=50)
    {
        printf("enter your attendence percentage");
        scanf("%f",&attendence);
        {
            if(attendence>=75)
            {
                printf("eligible for scholorship");
            }
            else
            {
                printf("not eligible for scholorship");
            }
        }
    }
    else
    {
        if(marks>=35)
        {
            printf("pass...but not eligible");
        }
        else
        {
            printf("failed...");
        }
    }
    return 0;
}

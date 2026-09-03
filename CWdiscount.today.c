#include<stdio.h>
int main()
{
    int membership,amount;
    float discount,bill;
    printf("enter the amount");
    scanf("%d",amount);
    if(amount>=5000)
    {
        printf("enter the membership id");
        scanf("%d",&membership);
        if(membership=1)
        {
            printf("your have membership card so you got 20 percent discount");
            discount=amount*0.2;
            bill=amount-discount;
            printf("the total bill is %f",bill);
        }
        else
        {
            printf("your does not have membership card so you got 10 percent discount");
            discount=amount*0.1;
            bill=amount-discount;
            printf("the total bill is %f",bill);
        }
        
    }
    else
    {
        printf("enter the membership id");
        scanf("%d",&membership);
        if(membership==1)
        {
            printf("your have membership card so you got 5 percent discount");
            discount=amount*0.05;
            bill=amount-discount;
            printf("the total bill is %f",bill);
        }
        else
        {
            printf("your does not have membership card so you got 0 percent discount");
            discount=0;
            bill=amount-discount;
            printf("the total bill is %f",bill);
        }
    }
    return 0;
}

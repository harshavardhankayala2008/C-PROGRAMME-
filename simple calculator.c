
#include <stdio.h>

int main()
{
    int a,b;
    char op;
    printf("simple calculator:");
    scanf("%d%d",&a,&b);
    printf("enter the operator");
    scanf(" %c",&op);
    switch(op)
    {
        case '+':
        printf("\n%d+%d=%d",a,b,a+b);
        break;
        case '-':
        printf("\n%d-%d=%d",a,b,a-b);
        break;
        case '*':
        printf("\n%d*%d=%d",a,b,a*b);
        break;
        case '/':
        if(b!=0)
        {
           printf("%d/%d=%d",a,b,a/b); 
        }
        else
        {
            printf("it is not possible:");
        }
        
        
        break;
        default:
        printf("the operator is invalid");
    }
    return 0;
}

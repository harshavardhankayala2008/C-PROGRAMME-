
#include <stdio.h>

int main()
{
    int n1,n2;
    printf("enter any two numbers:");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        printf("the biggest number is %d",n1);
    }
    else
    {
        printf("the biggest number is %d",n2);
    }
    return 0;
}

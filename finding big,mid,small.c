
#include <stdio.h>

int main()
{
    int n1,n2,n3,big,mid,small;
    printf("enter any three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2)
    {
        big=n1;
        if(n2>n3)
        {
            mid=n2;
            small=n3;
        }
        else
        {
            mid=n3;
            small=n2;
        }
    }
    if(n2>n1)
    {
        big=n2;
        if(n1>n3)
        {
            mid=n1;
            small=n3;
        }
        else
        {
            mid=n3;
            small=n1;
        }
    }
    if(n3>n1)
    {
        big=n3;
        if(n1>n2)
        {
            mid=n2;
            small=n1;
        }
        else
        {
            mid=n1;
            small=n2;
        }
    }

    printf("\nthe big=%d\nthe mid=%d\nthe small=%d",big,mid,small);
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter one  two numbers:");
    scanf("%d",&j);
    for(n=1;n<=j;n++)
    {
        for(i=1;i<=j;i++)
        {
            printf("\n%d * %d = %d",n,i,n*i);
        }
    }
    return 0;
}

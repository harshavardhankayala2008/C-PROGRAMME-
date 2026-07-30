#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter any one number:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("\n the %d is a factor",i);
            
        }
        i++;
    }
    return 0;
}

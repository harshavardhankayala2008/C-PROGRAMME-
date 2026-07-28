#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter any one number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("\t%d",i);
        i=i+2;
    }
    return 0;
}
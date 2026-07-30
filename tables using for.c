#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\nenter any two number:");
    scanf("%d%d",&n,&j);
    printf("\nthe %d tables;",n);
    for(i=1;i<=j;i++)
    {
        printf("\n%d * %d = %d",n,i,n*i);
    }
    return 0;
}

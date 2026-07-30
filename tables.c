#include<stdio.h>
int main()
{
    int n,i=1,j;
    printf("\nenter any one number:");
    scanf("%d%d",&n,&j);
    printf("\nthe %d table",n);
    while(i<=j)
    {
        printf("\n%d * %d = %d",n,i,n*i);
        i++;
    }
    return 0;
}

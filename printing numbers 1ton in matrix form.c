#include<stdio.h>
int main()
{
    int r,c,n=1;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        {
            printf(" %d ",n);
            n++;
        }
        printf("\n");
    }
    return 0;
    
}

#include<stdio.h>
int main()
{
    int r,c,n=5;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==c)
            {
                printf(" 1 ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

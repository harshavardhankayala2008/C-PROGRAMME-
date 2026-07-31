#include<stdio.h>
int main()
{
    int r,c,n=1;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(c%2==0)
            {
                printf(" %d ",n);
                n++;
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
}

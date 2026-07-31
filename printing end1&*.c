#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if(c==r)
            {
                printf(" 1 ");
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

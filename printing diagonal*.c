#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        if(r==c)
        {
            printf(" * ");
        }
        else
        {
            printf(" %d ",c);
        }
        printf("\n");
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=5;c++)
        if(c%2==0)
        {
            printf(" 0 ",c);
        }
        else
        {
            printf(" 1 ",c);
        }
        printf("\n");
    }
    return 0;
}

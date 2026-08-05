#include<stdio.h>
int main()
{
    int r,lc,rc,sp,i;
    for(r=1;r<=5;r++)
    {
        for(sp=1;sp<=40-r;sp++)
        {
            printf(" ");
        }
        for(lc=1;lc<=r;lc++)
        {
            printf("%d",lc);
        }
        for(rc=r-1;rc>=1;rc--)
        {
            printf("%d",rc);
        }
        printf("\n");
    }
    for(r=4;r>=1;r--)
    {
        for(sp=1;sp<=40-r;sp++)
        {
            printf(" ");
        }
        for(lc=1;lc<=r;lc++)
        {
            printf("%d",lc);
        }
        for(rc=r-1;rc>=1;rc--)
        {
            printf("%d",rc);
        }
        printf("\n");
    }
    return 0;
}

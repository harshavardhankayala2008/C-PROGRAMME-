#include <stdio.h>

int main()
{
    int r, lc, rc, sp;

    for(r = 1; r <= 5; r++)
    {
        // Spaces
        for(sp = 5; sp >= r; sp--)
        {
            printf(" ");
        }

        // Ascending numbers
        for(lc = 1; lc <= r; lc++)
        {
            printf(" %d ", lc);
        }

        // Descending numbers
        for(rc = r - 1; rc >= 1; rc--)
        {
            printf(" %d ", rc);
        }

        printf("\n");
    }
    return 0;
}

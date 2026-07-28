/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2;
    printf("\nbefore swaping");
    printf("\nenter any two numbers:");
    scanf("%d%d",&n1,&n2);
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\nafter swaping\n");
    printf("n1=%d\tn2=%d",n1,n2);
    return 0;
}

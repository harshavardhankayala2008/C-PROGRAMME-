/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c;
    printf("enter any one character:");
    scanf("%c",&c);
    if((c>=65&&c<=90)||(c>=97&&c<=122))
    {
        printf("the given character is an alphabet:");
    }
    else
    {
        printf("the given character is not an alphabet:");
    }
    return 0;
}

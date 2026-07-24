/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1,n2,n3;
    printf("enter any three numbers:");
    scanf("%d%d%d",&n1,&n2,&n3);
    if(n1>n2&&n1>n3)
    {
        printf("the biggest number is %d",n1);
    }
    if(n2>n3&&n2>n1)
    {
        printf("the biggest number is %d",n2);
    }
    else
    {
        printf("the biggest number is %d",n3);
    }
    
    
    return 0;
}

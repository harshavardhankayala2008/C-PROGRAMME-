#include<stdio.h>
int main()
{
    char c;
    printf("enter any one character:");
    scanf("%c",&c);
    if(c>=65&&c<=90)
    {
        printf("the given character is upper case:");
    }
    else if(c>=97&&c<=122)
    {
        printf("the given character is lower case:");
    }
    else
    {
        printf("the given character is not an alphabet:");
    }
    return 0;
}

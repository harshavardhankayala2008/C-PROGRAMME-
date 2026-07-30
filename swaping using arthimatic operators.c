
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

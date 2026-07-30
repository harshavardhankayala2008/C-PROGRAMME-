
#include <stdio.h>

int main()
{
    int n1,n2,dup;
    printf("before swaping:");
    printf("\nenter two values:");
    scanf("%d%d",&n1,&n2);
    printf("\nn1=%d\tn2=%d",n1,n2);
    printf("\nafter swaping:");
    dup=n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=dup;
    printf("\nn1=%d\tn2=%d",n1,n2);
    return 0;
}



#include <stdio.h>

int main()
{
 int n1,n2,big;
 printf("enter any two numbers:");
 scanf("%d%d",&n1,&n2);
 if(n1>n2)
 {
     big=n1;
 }
 else
 {
     big=n2;
 }
 printf("the big number is:%d",big);

    return 0;
}

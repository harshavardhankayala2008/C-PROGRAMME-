#include<stdio.h>
int main()
{
  int a,b,perimeter;
  printf("enter any 2 numbers:");
  scanf("%d%d",&a,&b);
  perimeter=2*(a+b);
  printf("the perimeter of the parallelogram is %d",perimeter);
  return 0;
}

#include<stdio.h>
int main()
{
  int m,p,c;
  printf("enter your 3 subjects marks");
  scanf("%d%d%d",&m,&p,&c);
  if((m>=35)&&(p>=35)&&(c>=35))
  {
      printf("the student is pass.............");
  }
  else
  {
      printf("the student is fail.............");
  }
  return 0;
}

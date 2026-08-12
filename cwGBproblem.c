#include<stdio.h>
int main()
{
    float totaldata,consumedata,remainingdata,pcdata,prdata;
    printf("enter the totaldata&consumedata");
    scanf("%f%f",&totaldata,&consumedata);
    remainingdata=totaldata-consumedata;
    pcdata=(consumedata/totaldata)*100;
    prdata=(remainingdata/totaldata)*100;
    printf("\ntotaldata=%f",totaldata);
    printf("\nconsumedata=%f",consumedata);
    printf("\nremainingdata=%f",remainingdata);
    printf("\npcdata=%f",pcdata);
    printf("\nprdata=%f",prdata);
    return 0;
}

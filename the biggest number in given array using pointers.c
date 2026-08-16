#include<stdio.h>
int main()
{
    int a[10],n,i,big,*p;
    printf("enter the no.of elements required in array");
    scanf("%d",&n);
    printf("enter the array elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    p=&a[0];
    big=a[0];
    for(i=0;i<n;i++)
        if(*(p+i)>big)
        {
            big=*(p+i);
        }    
    printf("the big is %d",big);
    return 0;
}

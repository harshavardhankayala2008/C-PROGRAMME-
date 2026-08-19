#include<stdio.h>
int main()
{
    int a[10],b[10],c[10],d[10],i,k,l,m;
    printf("enter the range of a");
    scanf("%d",&k);
    printf("enter the elements of an array a");
    for(i=0;i<k;i++)
    scanf("%d",&a[i]);
    printf("enter the range of b");
    scanf("%d",&l);
    printf("enter the elements of an array b");
    for(i=0;i<l;i++)
    scanf("%d",&b[i]);
    printf("enter the range of c");
    scanf("%d",&m);
    printf("enter the elements of an array c");
    for(i=0;i<m;i++)
    scanf("%d",&c[i]);
    if((k==l)&&(l==m))
    {
        for(i=0;i<m;i++)
        {
            d[i]=a[i]+b[i]+c[i];
            
        }
        printf("the resultant array is ");
        for(i=0;i<m;i++)
            printf("%d ",d[i]);
    }
    return 0;
}

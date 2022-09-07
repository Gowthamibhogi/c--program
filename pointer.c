#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int n,i,sum=0;
    printf("enter n value");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    scanf("%d",a+i);
    for(i=0;i<n;i++)
    sum=sum+*(a+i);
    printf("sum of %d numbers=%d",n,sum);
    return 0;
}
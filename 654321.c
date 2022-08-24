#include <stdio.h>

int main()
{
    int n,i,j;
    printf("enter n value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=n-i;j<=n;j++)
        {
            printf("%2d",j);
        }
        printf("\n");
    }

    return 0;
}
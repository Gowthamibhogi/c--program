#include <stdio.h>

int main()
{
    int x,ans;
    printf("enter a number");
    scanf("%d",&x);
    ans=checkevenodd(x);
    if(ans==0)
    printf("even");
    else
    printf("odd");
}
int checkevenodd(int x)
{
    if(x%2==0)
    return (0);
    else
    return (1);
}
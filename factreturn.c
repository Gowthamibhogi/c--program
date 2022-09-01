#include <stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter n value");
    scanf("%d",&n);
    printf("result=%d",fact(n));
}
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
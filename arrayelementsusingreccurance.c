#include <stdio.h>

void main()
{
   int x[5],i,n;
   printf("enter n value");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&x[i]);
   }
   int len=n-1;
   display(x,0,len);
}
void display(int x[],int start,int end)
{
    if(start>end)
    return;
    else
    printf("%d\t",x[start]);
    display(x,start+1,end);
}
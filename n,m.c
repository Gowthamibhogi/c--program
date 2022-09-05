#include<stdio.h>
void main()
{
	int n,m;
	printf("enter n and m values");
	scanf("%d%d",&n,&m);
	display(n,m);
}
void display(int start,int end)
{
	if(start>end)
	return;
	else
	printf("%d",start);
	display(start+1,end);
}
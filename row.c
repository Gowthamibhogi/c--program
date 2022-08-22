#include<stdio.h>
void main()
{
	int a[100][100];
	int i,j,r,c,s=0,n;
	printf("enter r and c values");
	scanf("%d%d",&r,&c);
	printf("enter the elements into array");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			s=s+a[i][j];
		}
		printf("enter row number");
		scanf("%d",&n);
		printf("%d row sum=%d\n",i+1,s);
		break;
	}
}
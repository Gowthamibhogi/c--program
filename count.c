#include<stdio.h>
void main()
{
	int i;
	char x[50],cnt=1;
	printf("enter a string\n");
	gets(x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]==' ')
		cnt+=1;
	}
	printf("no of words:%d",cnt);
}
	
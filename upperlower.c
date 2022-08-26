#include<stdio.h>
void main()
{
	char s[20];
	int i,x=0,count=0,y=0;
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(isupper(s[i]))
		x=x+1;
		else if(islower(s[i]))
		count=count+1;
		else if(isdigit(s[i]))
		y=y+1;
	}
	printf("\n count of uppercase letters:%d",x);
	printf("\n count of lowercase letters:%d",count);
	printf("\n count of numbers:%d",y);
}
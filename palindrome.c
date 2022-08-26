#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	int i,j,size;
	printf("enter a string:");
	gets(s);
	size=strlen(s);
	i=0;j=size-1;
	while(i<(size/2))
	{
		if(s[i]==s[j])
		i++;
		j--;
	}
	if(s[i]==s[j])
	printf("palindrome");
	else
	printf("not palindrome");
	return 0;
}
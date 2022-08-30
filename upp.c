#include <stdio.h>

int main()
{
    char s[100];
    int i;
    printf("enter a string:");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a')
        {
            s[i]=s[i]-32;
        }
    }
    printf("output:");
    puts(s);
    return 0;
}
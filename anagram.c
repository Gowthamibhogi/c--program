#include <stdio.h>
#include<string.h>

int main()
{
    char s1[20],s2[20];
    int i,n,count=0,j,temp,m;
    printf("enter string s1");
    gets(s1);
    printf("enter string s2");
    gets(s2);
    n=strlen(s1);
    m=strlen(s2);
    if(n==m)
    {
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(s1[j]>s1[j+1])
                {
                    temp=s1[j];
                    s1[j]=s1[j+1];
                    s1[j+1]=temp;
                }
            }
        }
        puts(s1);
        for(i=0;i<m-1;i++)
        {
            for(j=0;j<m-i-1;j++)
            {
                if(s2[j]>s2[j+1])
                {
                    temp=s2[j];
                    s2[j]=s2[j+1];
                    s2[j+1]=temp;
                }
            }
        }
        puts(s2);
    }
    for(i=0;s1[i]!='\0';i++)
    {
        if(s1[i]==s2[i])
        count++;
    }
    if(count==n)
    printf("ANAGRAM");
    else
    printf("NON ANAGRAM");
    return 0;
}
#include <stdio.h>

int main()
{
    int n,i,num,count=0;
    printf("enter n value");
    scanf("%d",&n);
    printf("enter number");
    scanf("%d",&num);
    int f1=0,f2=1,f;
    if(num==f1||num==f2)
    printf("YES\n");
    else
    {
        while(n>0)
        {
            f=f1+f2;
            if(num==f)
            {
                count=1;
                break;
            }
            f1=f2;
            f2=f;
            n--;
        }
        if(count==1)
        printf("\n YES");
        else
        printf("\n NO");
    }
    return 0;
}

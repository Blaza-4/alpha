#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i,flag=0,len;
    printf("enter the strig=>");
    scanf("%[^\n]s",str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("not palinfdrome");
    }
    else
    {
        printf("palindrome");
    }

}

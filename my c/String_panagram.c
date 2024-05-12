#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int i,wc[26]={0},j,n;
    printf("enter size=>");
    scanf("%d",&n);
    char str[n];
    printf("enter array string=>");
    scanf("%s",str);
    int flag =1;
    for(i=0;i<n;i++)
    {
        wc[str[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(wc[i]==0)
        {
            flag =0;
            break;
        }
    }
    if(flag==0)
    {
        printf("not panagram");
    }
    else
    {
        printf("panagram");
    }
    char upper[26];
    for(i=0;i<n;i++)
    {
        upper[i]=toupper(str[i]);
    }
    printf("%s",upper);
}

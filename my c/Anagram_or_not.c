#include<stdio.h>
#include<string.h>
int main()
{
    char w1[20],w2[20];
    int len1,len2,i,j;
    int flag=0;
    printf("enter first word=>");
    scanf("%s",w1);
    printf("\n enter first word=>");
    scanf("%s",w2);

    char list1[26]={0},list2[26]={0};

    len1=strlen(w1);
    len2=strlen(w2);

    for(i=0;i<len1;i++)
    {
      // int lower=tolower(w1[i]);
        list1[w1[i]-'a']++;
    }
     for(i=0;i<len2;i++)
    {
        //int lower=tolower(w2[i]);
        list2[w2[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(list1[i]!=list2[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
        printf("not");
    else
        printf("anagram");

}

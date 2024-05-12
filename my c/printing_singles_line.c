#include<stdio.h>
int main()
{
    char str[30],i,j;
    printf("enter the sentence=>");
    scanf("%[^\n]s",str);
    printf("------------Before modifying------------\n");
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
    }
    printf("\n------------After--------------\n");
     for(i=0;str[i]!='\0';i++)
    {
       if(str[i]==' ')
       {
           printf("\n");
       }
       else
       {
           printf(" ,%c",str[i]);
       }
    }
    printf("\n\n");
}

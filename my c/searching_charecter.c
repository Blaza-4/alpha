#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
int search(char [],char);
int main()
{
int n;
char se;
char *str=malloc(1024 * sizeof(char));
printf("enter string=>");
scanf("%[^\n]s",str);
printf("the string is=>%s\n",str);

printf("enter charecter to be serached=>");
scanf(" %c",&se);
int ans = search(str,se);
if(ans!=-1)
{
    printf("found at position %d",ans);
}
else{
    printf("not found");
}
}

int search(char str[],char se)
{
    int len= strlen(str);
    for(int i=0;i<len;i++)
    {
        if(str[i] == se)
        {
            return i;
        }
    }
    return -1;
}




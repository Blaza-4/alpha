#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i;
    char*str = malloc(1024 * sizeof(char));
   //char str[20];
    printf("enter The charecter=>");
    scanf("%s",str);
    int arr[10];
    for(i=1;i<10;i++)
    {
        arr[i]=0;
    }
    int n = strlen(str);
    for(i=0;i<n;i++)
    {
        int k;
        k=str[i]-'0';
        if(k>=0 && k<10)
        {
            arr[k]++;
        }
    }
     for(i=1;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
}

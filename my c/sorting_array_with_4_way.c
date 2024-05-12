#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,j,n;
    printf("enter number of names=>");
    scanf("%d",&n);
      char arr[n][20];

    for( i=0;i <n;i++ )
    {
        scanf("%s",arr[i]);
    }

    printf("\n \n");
     printf("\n---------------sorting before------------------\n");
    for(int i=0;i < n;i++ )
    {
        printf("%s\n",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(arr[j],arr[j+1])>0)
               {
                   char temp[10];
                   strcpy(temp,arr[j]);
                   strcpy(arr[j],arr[j+1]);
                   strcpy(arr[j+1],temp);
               }
        }
    }
    printf("\n\n");
     printf("\n---------------sorting based on size------------------\n");
     for(int i=0;i < n;i++ )
    {
        printf("%s\n",arr[i]);
    }
    printf("\n---------------sorting based on length------------------\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
           int len1,len2;
           len1=strlen(arr[j]);
           len2=strlen(arr[j+1]);
           if(len1>len2)
           {
                char temp[10];
                   strcpy(temp,arr[j]);
                   strcpy(arr[j],arr[j+1]);
                   strcpy(arr[j+1],temp);
           }
        }
    }
      for(int i=0;i < n;i++ )
    {
        printf("%s\n",arr[i]);
    }

}


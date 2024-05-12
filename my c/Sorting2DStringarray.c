#include<stdio.h>
#include<string.h>
int main()
{
    printf("-------------------SORTING ARRAY OG CHARECTERS-------------------------\n");
    int n;
    printf("enter number of names");
    scanf("%d",&n);
    char arr[n][20];
    int i,j;

    for( i=0;i <n;i++ )
    {
        scanf("%s",arr[i]);
    }

    printf("\n \n");
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
     for(int i=0;i < n;i++ )
    {
        printf("%s\n",arr[i]);
    }

    printf("-------------------SORTING ARRAY OG CHARECTERS-------------------------\n");
    int n1,*arr1;
    printf("enter limit=>");
    scanf("%d",&n1);
    *arr1 = (int*)malloc(n1 * sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n\n");
     for(i=0;i<n;i++)
    {
        printf("%d\t",arr1[i]);
    }

}

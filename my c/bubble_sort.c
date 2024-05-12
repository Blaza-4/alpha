#include<stdio.h>
int main()
{
    int arr[10],i,j,min,n;
    printf("Enter limit=>");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("--------------before----------------\n");
     for(i=0;i<n;i++)
      {
        printf("%d ",arr[i]);
      }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j + 1])
            {
                min=arr[j];
                arr[j] = arr[j+1];
                arr[j+1]  = min;
            }
        }
    }
    printf("\n--------------after----------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

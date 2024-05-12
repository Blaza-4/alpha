#include<stdio.h>
int main()
{
    int n,i,j;
    int flag=0;
    printf("array limit=>");
    scanf("%d",&n);
    printf("enter array elemnets=>");
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   int leader[10];
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(arr[i]<arr[j])
           {
              break;
           }
       }
       if(j == n)
       {
            printf("%d\t",arr[i]);
       }
   }
}


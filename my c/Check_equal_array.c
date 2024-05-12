#include<stdio.h>
#include<stdlib.h>
void sort_check(int *arr1,int *arr2,int n);
int main()

{
  int n,i,j;
  printf("enter array size=>");
  scanf("%d",&n);
  int *arr1 = (int*)malloc(n * sizeof(int));
  int *arr2 = (int*)malloc(n * sizeof(int));
  printf("enter elements");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr1[i]);
  }
   printf("enter elements");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr2[i]);
  }
  sort_check(arr1,arr2,n);
}
void sort_check(int *arr1,int *arr2,int n)
{

    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            int temp;
            if(arr1[j]>arr1[j+1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            int temp;
            if(arr2[j]>arr2[j+1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }
    printf("sorted array is \n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",arr1[i]);
    }
    printf("\nsorted array is \n");
    for(i=0;i<n;i++)
    {
      printf("%d\t",arr2[i]);
    }
    int flag =1;
    for(i=0;i<n;i++)
    {
        if(arr1[i]!=arr2[i])
        {
             flag=0;
            break;
        }
    }
    if(flag==0)
        printf("\nnot equal");
    else
       printf("\nequal array");
}

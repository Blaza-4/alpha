#include<stdio.h>
#include<stdlib.h>
void right(int *arr,int n);
void left(int *arr,int n);
int main()
{
    int n,i;
    printf("enter array limit=>");
    scanf("%d",&n);
    int *arr = (int*)malloc (n * sizeof(int));
    //int arr[20];
    printf("enter array elemnts=>\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     right(arr,n);
     left(arr,n);
}
void right(int *arr,int n)
{
    int i,j;
    printf("Entered array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");


    int temp= arr[n-1];

    for(i=n-2;i>=0;i--)
    {
        arr[i+1]=arr[i];

    }
     arr[0]=temp;

    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

}
void left(int *arr,int n)
{
    int i;
    int arr1[]={1,2,3,4,5};
    int temp = arr1[0];
  for(i=0;i<n-1;i++)
  {
      arr1[i]= arr1[i+1];
  }
  arr1[n-1] = temp;

  printf("\n");
  for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

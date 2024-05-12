#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,k;
    printf("enter array size=>");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("\nenter array elemnts\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("before removing elemnts\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("\nafter removing elemnts\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

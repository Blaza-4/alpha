#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,arr[20];
    printf("enter limit=>");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n------------normal array-----------------\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n------------reversed array----------------\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}


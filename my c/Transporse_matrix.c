#include<stdio.h>
int main()
{
    int i,j;
    int rows,cols;// this is not recommendned;
    printf("enter number of rows=>");
    scanf("%d",&rows);
    printf("enter cols=>");
    scanf("%d",&cols);
    int arr[rows][cols],tran[rows][cols];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nthe matrix is\n");
     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nafter transpose\n");
     for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
           tran[j][i] = arr[i][j];
        }
    }
     for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
            printf("%d\t",tran[i][j]);
        }
        printf("\n");
    }
}

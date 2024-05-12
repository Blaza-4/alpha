#include<stdio.h>
int main()
{
    int row,col,i,j,sum=0;
    printf("enter rows=>");
    scanf("%d",&row);
    printf("enter cols=>");
    scanf("%d",&col);
    int arr[row][col];
    printf("enter array elements");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enterd arry is=>\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

      for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j || i+j == col-1)
            {
                sum+=arr[i][j];
            }

        }
    }
    printf("\nsum is =%d",sum);
}

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,*result,i,j=1,flag;
    printf("enter limit=>");
    scanf("%d",&num);
    printf("\nprime numbers are \n");
    for(i=2;i<=num;i++)
    {
        flag = 1 ;
        for(j=2;j<=i/2 ;j++)
        {
        if(i % j ==0)
           {
            flag = 0;
           }
        }
        if(flag == 1)
        {
            printf("%d ",i);
        }
    }
}


/* #include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the limit=>");
    scanf("%d",&n);
    printf("\n --------------prime numbers are---------------------\n");
    for(i=2;i<=n;i++)
    {
        int flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i % j ==0)
            {
                flag = 0;
            }
        }
        if(flag ==1)
        {
            printf("%d\t",i);
        }
    }
}

*/

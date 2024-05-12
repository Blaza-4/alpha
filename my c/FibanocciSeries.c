#include<stdio.h>
int fibanocci(int n);
int main()
{
    int n;
    printf("enter limit=>");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d",fibanocci(i));
    }
}
fibanocci(int n)
{


    return fibanocci(n-1)+fibanocci(n-2);
}

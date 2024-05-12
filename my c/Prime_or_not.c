#include<stdio.h>
int main()
{
    int i,j,num,flag;
    printf("Enter number=>");
    scanf("%d",&num);

    for(i=2;i<=num;i++)
    {
        if(num % i == 0)
        {
            flag++;

        }
    }
    if(flag==2)
    {
        printf("prime number");
    }
    else
    {
        printf("not prime");
    }
}

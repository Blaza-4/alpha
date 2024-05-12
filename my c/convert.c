#include<stdio.h>
int main()
{
  int choice,key,a[20],i=0,j,num;
  char b[20];

  do
    {
    printf("\n enter the number:");
    scanf("%d",&num);
    printf(" 1-Convert to binary:\n 2-Convert to Octal:\n 3-Convert to Hexa:\n 4-Exit:\n");
    printf("Enter the choice:");
    scanf("%d",&key);
    switch(key)
    {
        case 1: while(num>0)
            {
            a[i]=num%2;
            i++;
            num=num/2;
            }
        for(j=i-1;j>=0;j--)
        {
            printf("%d",a[j]);

        }
        break;
        case 2: while(num>0)
            {
            a[i]=num%8;
            i++;
            num=num/8;
            }
        for(j=i-1;j>=0;j--)
        {
            printf("%d",a[j]);
        }
        break;
         case 3: while(num>0)
            {
            b[i]=num%16;
            i++;
            num=num/16;
            }
        for(j=i-1;j>=0;j--)
        {
            if(b[j]<10)
            {
                printf("%d",b[j]);
            }
            else
            {
                printf("%c",'A'+b[j]-10);
            }

        }
        break;
        default :
            printf("Not Available");
            break;
    }
  }while(key!=4);

}

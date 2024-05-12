#include<stdio.h>
int main()
{
    int lines,i;
    scanf("%d",&lines);
    for(i=1;i<=lines;i++){
            if(i%3==0 && i%5==0){
                printf("buzzfizz \n");
            }
            else if(i%5==0){
                printf("fizz\n");
            }
            else if(i%3==0){
                printf("buzz\n");
            }
            else{
                printf("%d\n",i);
            }
    }
}

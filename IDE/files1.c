#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int file = open("testin.txt" , O_WRONLY| O_CREAT,0644);
    printf(" file  = %d",file);

    if(file==-1){
        printf("error");
    }
    else{
        printf("sucess");

    char *data = (char*)malloc(100 * sizeof(char));
    data = "Hello world from Adin!!";
    int res = write(file,data,strlen(data));
    printf("\n wrote %d",res);
    free(data);
    }
}

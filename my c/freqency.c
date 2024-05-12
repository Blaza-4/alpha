
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int digit[10];
    int len;
    char * str = malloc(1024 * sizeof(char));
    scanf("%[^\n]s",str);
    len = strlen(str);
    for(int i=0;i<len;i++){
       int pos=0;
       if(pos>= 0 && pos < 10){
           digit[pos]++;
       }
    }
    for (int i=0;i<10;i++){
        printf("%d",digit[i]);
    }
    return 0;
}

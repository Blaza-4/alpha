#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
 int and =0,or=0,xor=0,maxAnd=0,maxOr=0,maxXor=0;
 for(int i=1;i<=n;i++)
 {
     for(int j=i+1;j<=n;j++){
        and = i&j;
         if(and < k &&   maxAnd< and ){
            maxAnd = and;
         }
        or = i | j;
        if(or < k &&  maxOr < or){
            maxOr = or;
        }
        xor = i ^ j;
         if(xor < k &&   maxXor < xor){
            maxXor = xor;
        }
     }
 }

printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXor) ;

}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}



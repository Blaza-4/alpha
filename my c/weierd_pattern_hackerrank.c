#include<stdio.h>
int main(){
int n,maxRows,maxCols;
scanf("%d",&n);
maxRows = maxCols = n+n-1;
 int vary = 1, numAtCol;
    for (int row = 1; row <= maxRows; row++)
    {
        numAtCol = n;
        for (int col = 1; col <= maxCols; col++)
        {
            if (col >= vary && col <= maxCols + 1 - vary)
                printf("%d ", n + 1 - vary);
            else if (col <= vary)
                printf("%d ", numAtCol--);
            else
                printf("%d ", ++numAtCol);
          }
        if (row < n) {
             vary++;
            } else {
              vary--;
            }
        printf("\n");
    }
}


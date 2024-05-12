#include<stdio.h>

void right_once(int arr[], int n);
void left_once(int arr[], int n);
void left(int n,int arr, int len);

int main() {
    int n, i, arr[] = {1, 2, 3, 4, 5};
    n = 5;
    printf("normal array is ==\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    int len = 2;
    left(n,arr,len);
    //right(arr, n);
    return 0;
}

void left(int n,int arr, int len)
{
    for(int i=0;i<len;i++)
    {
       left_once(arr,n);
    }
}

void left_once(int arr[], int n)
{
    int temp,i;
    temp=arr[0];
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1] = temp;
    printf("\n\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}


void right_once(int arr[], int n) {
    int temp, i;
    temp = arr[n - 1]; // Store the last element in temp

    // Shift elements to the right
    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp; // Place the last element at the beginning

    printf("\n\n");
    for (i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}

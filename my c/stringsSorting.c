#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lexicographic_sort(const char* a, const char* b) {
    return strcmp(a, b) > 0;
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(a, b) < 0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int dis1 = 0, dis2 = 0;
    int cha1[26] = {0}, cha2[26] = {0};
    int le1 = strlen(a);
    int le2 = strlen(b);

    for(int i = 0; i < le1; i++) {
        cha1[a[i] - 'a'] = 1;
    }
    for(int i = 0; i < le2; i++) {
        cha2[b[i] - 'a'] = 1;
    }
    for(int i = 0; i < 26; i++) {
        if(cha1[i]) {
            dis1++;
        }
        if(cha2[i]) {
            dis2++;
        }
    }

    if(dis1 != dis2) {
        return dis1 > dis2;
    } else {
        return strcmp(a, b) > 0;
    }
}

int sort_by_length(const char* a, const char* b) {
    int len1 = strlen(a);
    int len2 = strlen(b);

    if(len1 == len2) {
        return lexicographic_sort(a, b);
    }

    return len1 > len2;
}

void string_sort(char** arr, const int n, int (*cmp_func)(const char* a, const char* b)) {
    char *temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if((*cmp_func)(arr[j], arr[j+1])) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char** arr;
    arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        arr[i] = malloc(1024 * sizeof(char));
        scanf("%s", arr[i]);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    // Free allocated memory
    for(int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}

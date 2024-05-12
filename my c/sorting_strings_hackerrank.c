#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int lexicographic_sort(const char* a, const char* b) {
   /* int i,n;
    n=strlen(b);
    for(i=0;i<n;i++)
    {
        if(a[i] > b[i])
        {
            return 1;
        }
        else
        {
            return 0;
        }
    } */

  return strcmp(a,b) > 0;
}


int lexicographic_sort_reverse(const char* a, const char* b) {
  /*  int i,n;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i] > b[i])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }    */
return strcmp(a,b)<0;
}

int sort_by_number_of_distinct_characters(const char* a, const char* b)
{
   int dis1=0,dis2=0,i;
    int cha1[26]={0},cha2[26]={0};
    int le1=strlen(a);
    int le2=strlen(b);
    for(i=0;i<le1;i++)
    {
        cha1[a[i] - 'a'] = 1;
    }
    for(i=0;i<le2;i++)
    {
        cha2[b[i] - 'a'] = 1;
    }
    for(i=0;i<26;i++)
    {
        if(cha1[i])
        {
            dis1++;
        }
        if(cha2[i])
        {
            dis2++;
        }
    }
        if(dis1 != dis2)
        {
            return dis1 > dis2;
        }
        else
        {
           return (lexicographic_sort(a,b));
        }

}
int sort_by_length(const char* a, const char* b) {
   int len1=0,len2=0;
   len1 = strlen(a);
   len2 = strlen(b);
    if(len1==len2)
   {
       return (lexicographic_sort(a,b));
   }
   if(len1 > len2)
   {
       return 1;
   }

   else
   {
       return 0;
   }
}

void string_sort(char** arr,const int n,int (*cmp_func)(const char* a, const char* b)){
    int i,j;
  char *temp;
  for(i=0;i<n-1;i++)
  {
      for(j=0;j<n-1;j++)
      {
          if(((*cmp_func)(arr[j],arr[j+1])))
          {
              temp = arr[j];
              arr[j]=arr[j+1];
              arr[j+1] = temp;

          }
      }
  }
}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
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
}

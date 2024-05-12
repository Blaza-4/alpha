#include<stdio.h>
void sort(int a,int b,int c);
    struct squre {
       float len,bre,hei;
       float area[10];
    };
    int main(){
       struct squre s[10];
       int n;
       printf("enter Limit=>");
       scanf("%d",&n);
       printf("enter data=>");
       for(int i=0;i<n;i++){
        scanf("%f%f%f",&s[i].len,&s[i].bre,&s[i].hei);
       }
       for(int i=0;i<n;i++){
        s[i].area[i] = (s[i].len+s[i].bre+s[i].hei);
       }
       for(int i=0;i<n;i++){
        printf("%.2f",s[i].area[i]);
       }
    }





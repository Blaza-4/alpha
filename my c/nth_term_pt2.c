#include<stdio.h>
int find(int a, int b,int c,int n);
int main()
{
int a,b,c,d,n,ans;
printf("enter element=>");
scanf("%d",&n);
printf("enter elements=>");
scanf("%d%d%d",&a,&b,&c);
ans=find(n,a,b,c);
printf("%d",ans);
}
int find(int a, int b, int c, int n)
{
    int t1=a,t2=b,t3=c,number;
    for(int i=4;i<=n;i++){
        number=t1+t2+t3;
        t1=t2;
        t2=t3;
        t3=number;
    }
    return number;
}

#include<stdio.h>
int main()
{
    int a=0,b=1;
    int c=a+b;
    printf("%d %d ",a,b);
    int n;
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
    }
    return 0;
}
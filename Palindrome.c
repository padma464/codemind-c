#include<stdio.h>
int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    int t=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==t)
      printf("True");
    else
      printf("False");
}
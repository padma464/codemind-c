#include<stdio.h>
int main()
{
    int n,m,sum=0,r;
    scanf("%d",&n);
    m=n*n;
    while(m>0)
    {
        r=m%10;
        sum=sum+r;
        m=m/10;
    }
    if(sum==n)
      printf("Neon Number");
    else
      printf("Not Neon Number");
}
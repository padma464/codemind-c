#include<stdio.h>
int main()
{
    int a,sum=0,pro=1,t,r;
    scanf("%d",&a);
    while(a>0)
    {
        r=a%10;
        sum=sum+r;
        pro=pro*r;
        a=a/10;
    }
    t=pro-sum;
    printf("%d",t);
}
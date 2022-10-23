#include<stdio.h>
int rev(int n)
{
    int r,sum=0;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        sum=r+sum*10;
        n=n/10;
    }
    if(temp==sum)
      return true;
    else
      return false;
}
int main()
{
    int n,k=0,m=0;
    scanf("%d",&n);
    for(int i=n+1;;i++)
    {
        if(rev(i))
        {
            k=i;
            break;
        }
    }
    for(int i=n-1;;i--)
    {
        if(rev(i))
        {
            m=i;
            break;
        }
    }
    if((n-m)>(k-n))
      printf("%d",k);
    else if((n-m)==(k-n))
      printf("%d %d",m,k);
    else
      printf("%d",m);
}
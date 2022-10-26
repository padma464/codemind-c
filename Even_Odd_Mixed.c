#include<stdio.h>
int main()
{
    int n,m=0,c=0,s=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        m++;
        if(r%2==0)
          c++;
        else
          s++;
        n=n/10;
    }
    if(m==c)
      printf("Even");
    else if(m==s)
      printf("Odd");
    else
      printf("Mixed");
}
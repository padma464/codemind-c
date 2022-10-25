#include<stdio.h>
int main()
{
    int n,t,l,c=0;
    scanf("%d%d%d",&n,&t,&l);
    for(int i=n;i<=t;i++)
    {
        if(i%l==0)
          c++;
    }
          printf("%d",c);
}
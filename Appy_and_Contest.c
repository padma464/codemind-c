#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
    int n,a,b,k;
    scanf("%d%d%d%d",&n,&a,&b,&k);
    int c,c1,c2;
    c1=n/a;
    c2=n/b;
    c=n/(a*b);
    if(c1+c2-c>=k)
      printf("Win
");
    else
      printf("Lose
");
    }
}
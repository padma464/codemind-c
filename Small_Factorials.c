#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,s=1;
        scanf("%d",&n);
       for(int i=1;i<=n;i++)
       {
           s=s*i;
       }
       printf("%d
",s);
       s=0;
    }
}
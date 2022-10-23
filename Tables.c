#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d%d",&s,&n);
    for(int i=1;i<=n;i+=2)
    {
        printf("%d ",s);
        printf("x ");
        printf("%d ",i);
        printf("= ");
        printf("%d
",s*i);
    }
}
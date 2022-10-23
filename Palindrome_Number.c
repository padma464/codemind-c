#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int sum=0,r,n;
        scanf("%d",&n);
        int temp=n;
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        }
        if(temp==sum){
          printf("True
");
        }
        else
        {
          printf("False
");
        }
    }
}
#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,a;
        scanf("%d",&n);
        a=(int)sqrt(n);
        if((a*a)==n)
          printf("True
");
        else
          printf("False
");
    }
}
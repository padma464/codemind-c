#include<stdio.h>
int main()
{
    int a,c=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==0)
      printf("prime");
    else
       printf("not a prime");
}
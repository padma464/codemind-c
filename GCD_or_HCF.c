#include<stdio.h>
int main()
{
    int a,b,min,s;
    scanf("%d%d",&a,&b);
    if(a<b)
      min=a;
    else
      min=b;
    for(int i=min;;i--)
    {
        if(a%i==0&&b%i==0)
        {
            s=i;
            break;
        }
    }
    printf("%d",s);
}
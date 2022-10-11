#include<stdio.h>
int main()
{
    int a,s=0;
    scanf("%d",&a);
    for(int i=1;i<=(a/2);i++)
    {
        if(a%i==0)
          s+=i;
    }
    if(a==s)
    printf("True");
    else
    printf("False");
}
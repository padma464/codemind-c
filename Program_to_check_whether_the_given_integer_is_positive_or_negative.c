#include<stdio.h>
#include<math.h>
int main()
{
   int a;
   scanf("%d",&a);
   int s=abs(a);
   if(s==a)
     printf("Positive Number");
    else
     printf("Negative Number");
}
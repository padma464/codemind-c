#include<stdio.h>
#include<math.h>
int main()
{
    int a,m;
    scanf("%d",&a);
    float n;
    n=(int)sqrt(a);
    m=n*n;
    if(a==m)
      printf("True");
    else
      printf("False");
}
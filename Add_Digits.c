#include<stdio.h>
 int ispalindrome(int m)
    {
        int sum=0,r,temp=m;
        while(m>0)
        {
            r=m%10;
            sum=sum+r;
            m=m/10;
        }
         return sum;
    }
  int main()
  {
      int n;
      scanf("%d",&n);
      while(n>9)
      {
          n=ispalindrome(n);
      }
      printf("%d",n);
  }
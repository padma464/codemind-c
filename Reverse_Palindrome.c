#include<stdio.h>
#include<math.h>
    bool ispalindrome(int m)
    {
        int sum=0,r,temp=m;
        while(m>0)
        {
            r=m%10;
            sum=sum*10+r;
            m=m/10;
        }
        if(sum==temp)
           return true;
        else
           return false;
    }
    int reverse(int n)
    {
      int sum=0,r;
      while(n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n=n/10;
        } 
        return sum;
    }
    int main()
    {
        int n,res,s=0,i;
        scanf("%d",&n);
        n=abs(n);
        s=n+reverse(n);
        for(i=s;;i+=s)
        {
           if(ispalindrome(s))
           {
              printf("%d",s);
              break;
           }
           s=s+reverse(s);
        }
    }

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
    bool isprime(int n)
    {
        int count=0;
       for(int i=2;i<=(int)sqrt(n);i++)
       {
              if(n%i==0)
                    count++;
        }
         if (count==0)
                return true;
         else
               return false;
        }
    int main()
    {
        int n,i;
        scanf("%d",&n);
        for(i=n+1; ; i++)
         {
                if(isprime(i)&&ispalindrome(i))
                {
                 printf("%d",i);
                 break;
                 }
         }
  }






 
         
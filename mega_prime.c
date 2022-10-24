#include<stdio.h>
#include<math.h>
    bool isprime(int n)
    {
        if(n<2)
          return false;
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
        int n;
        int s=0,c=0,r;
        scanf("%d",&n);
        if(isprime(n))
        {
        while(n>0)
        {
            r=n%10;
            s++;
            if(isprime(r))
              c++;
            else 
              break;
            n=n/10;
        }
          if(c==s)
            printf("Mega Prime");
          else
            printf("Not Mega Prime");
        }
        else
          printf("Not Mega Prime");
  }


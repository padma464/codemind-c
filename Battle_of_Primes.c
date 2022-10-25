#include<stdio.h>
#include<math.h>
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
       int a,b,c;
        scanf("%d%d",&a,&b);
        c=a+b;
        for(int i=c+1;;i++)
        {
            if(isprime(i))
              {
                   printf("%d",i-c);
                  break;
              }
        }
   }
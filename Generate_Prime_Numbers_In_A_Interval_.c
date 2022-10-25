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
        if(count==0)
          return true;
        else
          return false;
    }
    int main()
    {
        int a,b;
        scanf("%d%d",&a,&b);
        for(int i=a;i<=b;i++)
        {
            if(isprime(i))
              printf("%d
",i);
        }
    }
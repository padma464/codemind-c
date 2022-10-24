#include<stdio.h>
#include<math.h>
    int main()
    {
        int a=0,b=1,c,n,m,r;
        c=a+b;
        scanf("%d",&n);
        while(c<=n)
        {
            a=b;
            b=c;
            c=a+b;
        }
        m=abs(b-n);
        r=abs(c-n);
        if(m>r)
           printf("%d",c);
        else if(m==r)
          printf("%d %d",b,c);
        else
            printf("%d",b);
       
    }
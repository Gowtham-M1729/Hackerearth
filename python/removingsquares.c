#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{ long int i,j,k,n,c=0,d,b;
  float m;
  scanf("%ld",&n);
  d=n;
  if(d%2==0)
  { b=0;
  while(d>0 && d%2==0)
    { m=sqrt(d);
       if(m-(int)m==0)
       { printf("%ld",b);
         exit(0);
       }
         d=d/(pow(2,b));
         b++;
        
    }
  }
  {
  while(n>0)
    {  k=(sqrt(n)); 
       n=(n-k*k);
	   if(n==2)
	   { c=c+2;
	     break;

	   }
       c++;
      printf("%ld ",n);
    }
  }
 printf("%ld",c);
}

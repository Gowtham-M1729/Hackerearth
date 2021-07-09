#include<stdio.h>
void main()
{ long long int i,j,k,n,c,d;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
     { scanf("%lld %lld",&k,&j);
       c=(k/j)-(j-1)/2;
       if(c<=0)
         printf("%lld %lld\n",k,c);
       else
         { if(k-(j*c+j*(j-1)/2)>=0)
             printf("%lld %lld\n",k-(j*c+j*(j-1)/2),c);
           else
             { for(d=1; ;d++)
                  { if(k-(j*(c-d)+j*(j-1)/2)>=0)
                      { printf("%lld %lld\n",k-(j*(c-d)+j*(j-1)/2),c);
                        break;
                      }
                  }
             }
         }
     } 
}                      

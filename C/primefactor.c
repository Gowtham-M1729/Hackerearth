#include<stdio.h>
long int gcd(long int n,long int k);
void main()
{ long int i,j,k=0,n;
scanf("%ld",&n);
for(i=1;i<=n;i++)
  { scanf("%ld %ld",&k,&m);
    k=gcd(k,m);
    for(j=2,t=2,c=0;k!=1;)
     { if(k%j==0)
       { 
          k=k/j;
          if(t!=j)
            { c++;
              t=j;
            }
            
          continue;
       } 
      else
          j=j+1;
     }
   printf("%ld\n",c);
  }
}
long int gcd(long int n,long int k)
 { 
	if (k == 0) 
		return n; 
	return gcd(k, n % k);
 }


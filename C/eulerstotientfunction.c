int prime(int n);
int gcd(int k,int j);
#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,c,d=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { scanf("%d",&k);
      printf("%d\n",prime(k));
    } 
}
int prime(int n)
 { int j,c=n;
     for (int p = 2; p * p <= n; ++p) { 
        if (n % p == 0) { 
              
            
            while (n % p == 0) 
                n /= p; 
            c -= c / p; 
        } 
    } 
    if (n > 1) 
        c -= c / n; 
    return c; 

 }



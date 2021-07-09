int prime(int n);
int multiple(int k);
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{ int i,j,k,n,c,d=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { scanf("%d",&k);
      printf("%d\n",k-(prime(k)+multiple(k)));
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
    printf("%d",c);
    return c; 

 }
int multiple(int k)  
  {   int i,c=0;
      for ( i = 1; i <= sqrt(k); i++) { 
        if (k % i == 0) { 
            if (k / i == i) 
                c++; 
  
            else
                c = c + 2; 
        } 
    } 
    printf("%d",c);
    return c;
  }



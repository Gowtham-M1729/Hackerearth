int prime(int n);
int gcd(int k,int j);
#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  j=prime(n);
  if(j==1)
    { printf("%d",n-3);
      exit(0);
    }
  for(i=n-2; ;i--)
     {  k=gcd(n,i);
        if(k==1)
          { printf("%d",i);
            exit(0);
          }
     }
}
int prime(int n)
 { int j,c=0;
     for(j=2;j<n/2;j++)
        { if(n%j==0) 
            { c=1;
            }
           if(c==0)
             return(1);
        }
    return(0);
 }
int gcd(int n,int k)
 { 
	if (k == 0) 
		return n; 
	return gcd(k, n % k);
 }


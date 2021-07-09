int gcd(int k,int j);
#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n;
  scanf("%d %d",&n,&k);
  d=gcd(n,k);
  if(d>1)
    printf("Yes");
  else
    printf("No");
}
int gcd(int n,int k)
 { 
	if (k == 0) 
		return n; 
	return gcd(k, n % k);
 }

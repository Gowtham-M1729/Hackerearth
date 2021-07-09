#include<stdio.h>
void main()
{ int i,j,k,n,c;
  scanf("%d",&n);
  k=2*n-1+(n-1)*(n-2);
  c=(k+1)/2;
  j=c+n-1;
  if(n==1)
    printf("%d",1)
  else
    printf("%d",j*j-c*c);
}

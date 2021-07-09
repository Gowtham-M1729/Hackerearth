#include<stdio.h>
#include<math.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  printf("%d",(int)(pow(2,n)-(n*(n-1))/2));
}

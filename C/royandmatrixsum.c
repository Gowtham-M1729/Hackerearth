#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       j=((k*(k+1)*(2*k+1))/6)+(k*(k+1))/2;
       printf("%d",j);
     }
}


#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       if(k%2==0)
         m=k/2;
       else
         m=(k-1)/2;
       j=3*m+2*m*(m-1);
       if(k%2==0)
          printf("%d",j);
       else
          printf("%d",j-k*k);
     }
}

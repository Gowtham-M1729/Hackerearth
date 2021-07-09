#include<stdio.h>
void main()
{ int i,j,k,n,m,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d",&k,&m);
       j=(k>=m)?k:m;
       if(j==k)
         c=m;
       else
         c=k;
       printf("%d\n",j/c);
     }
}

#include<stdio.h>
void main()
{ int i,j,k,n,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       for(j=1,c=0;j<=k/2;j++)
          { if(k%j==0)
              c=c+j;
          }
       printf("%d\n",c);
     }
}

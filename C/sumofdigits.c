#include<stdio.h>
void main()
{ int i,j,k,n,c;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       for(c=0 ;k>0;k=k/10)
          { c=c+k%10;
            if(c/10>0)
              { for(j=0 ;c>0;c=c/10)
                 j=j+c%10;
                c=j;
              } 
          }
         printf("%d",c);
     }
}

#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d",&j,&k);
       if(3*j-4*k<=0)
         printf("%d",0);
       else
         printf("%d",3*j-4*k);
     }
}


#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
       if(n-(a[i]+i)<=0)
         { printf("%d",i);
           exit(0);
         }
     }
}

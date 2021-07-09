#include<stdio.h>
void main()
{ int i,j,k,n,c;
  scanf("%d",&n);
  for(i=1,c=0;i<=n;i++)
     { scanf("%d",&a[i]);
       if(i==1)
         continue;
       if(a[i]==a[i-1])
         c++;
       else
         c=0;
     }
}

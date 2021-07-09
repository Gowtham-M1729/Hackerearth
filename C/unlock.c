#include<stdio.h>
void main()
{ int i,j,k,n,b,m;
scanf("%d",&n);
for(i=1;i<=n;i++)
 { scanf("%d",&m);
   scanf("%d",&k);
   if(k==m)
    for(j=k,b=1;j>0;j--)
      b=b*j;
   else
    for(j=k,b=1;j>=k-m;j--)
      b=b*j;
   printf("%d\n",b);
 }
}


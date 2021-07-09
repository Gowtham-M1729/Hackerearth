#include<stdio.h>
void main()
{ int i,j,k,n,c,d;
scanf("%d",&n);
for(i=1;i<=n;i++)
{  for(d=1;d<=n-i;d++)
   printf(" ");
   for(j=1,c=i;j<=i;j++)
    { printf(" %d",c);
      c++;
    }
   for(k=1;k<=i-1;k++)
     { printf(" %d ",c-2); 
       c--;
     }
printf("\n");
}
}

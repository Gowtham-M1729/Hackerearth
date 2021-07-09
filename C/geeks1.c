#include<stdio.h>
void main()
{ int i,j,k,n,m=0,p;
scanf("%d",&k);
for(i=1;i<=k;i++)
 { scanf("%d",&n);
  j=n;
 for( ; ; )
  {   printf("%d\t",n);
      n=n-5;
      if(n<=0)
         while(1)
          { m++;
             printf("%d\t",n);
             n=n+5;
           if(n==j)
          { printf("%d\n",n);
           break;
          }
             
          }
       
    if(n==j)
    break;
   }
 }
}

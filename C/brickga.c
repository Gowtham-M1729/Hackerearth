#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n;
scanf("%d",&n);
for(i=1 ; ;i++)
{ if(n-i<=0)
   {  printf("Patlu");
      n=n-i;
      exit(0);
   }
    n=n-i;
   if(n-2*i<=0)
   {  printf("Motu");
      exit(0);
   }
    n=n-i*2;
}
}

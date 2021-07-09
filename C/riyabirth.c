#include<stdio.h>
#include<math.h>
void main()
{ unsigned long long int i,j,k,n,c=9,b,a;

a=1;
b=6;
scanf("%lld",&n);
for(i=1;i<=n;i++)
 { scanf("%lld",&k);
   k=k-1;
   if(k==0)
    printf("%lld",a);
 
   else
   printf("%lld\n",(1+k*((2*5+(k-1)*4)/2))%(1000000000+7));
 }
}


   


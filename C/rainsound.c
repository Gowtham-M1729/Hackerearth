#include<stdio.h>
void main()
{ unsigned long long int i,j,k,n,a,m,t;
scanf("%lld",&n);
for(i=1;i<=n;i++)
 { scanf("%lld %lld %lld",&k,&a,&m);
     j=(k>a)?k:a;
     t=(k<a)?k:a;
   if((k-a)<m || m>j || m>a  )
    printf("%d %d\n",-1,-1);
   else
   {
   if(k%m==0)
     { 
        printf("%lld ",k/m);
     }
   else
        printf("%lld ",(k/m)+1);
   printf("%lld\n",a/m);
   }
 }
}
     
   

#include<stdio.h>
void  main()
{ unsigned long long int i,j,k,n,a,b=1,c,t=0;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{
 scanf("%lld %lld",&k,&a);
    if(k>t)
     {j=k;
      c=t; 
     }
     else
     {
         b=1;
         c=0;
         j=k;
     }
 for(;j>c;j--)
   b=(b*j);
printf("%lld\n",(b*a)%1000003);
 t=k;
}
}

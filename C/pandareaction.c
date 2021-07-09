unsigned long long  int factorial(unsigned long long int);
#include<stdio.h>
void  main()
{ unsigned long long int i,j,k,n,a,b,c;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{
 scanf("%lld %lld",&k,&a);
 
 c=factorial(k);
    printf("%lld\n",(a*c)%1000003);
}
}
unsigned long long  int factorial(unsigned long long int j) 
{ 
    if (j == 0) 
        return 1; 
    return j * factorial(j - 1); 
} 


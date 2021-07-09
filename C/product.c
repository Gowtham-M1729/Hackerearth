#include<stdio.h>
void main()
{ long long int i,j,k=1,a[1000],n;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{ scanf("%lld",&a[i]);
 k=(k*a[i])%(1000000007);
}
printf("%lld",k);
}


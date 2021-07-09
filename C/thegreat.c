#include<stdio.h>
void main()
{ long long int i,j=1,k,n,a[100000],t=0,m,c=2,d=3;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
     { scanf("%lld",&a[i]);
     }
  for(i=0,k=0,m=0;i<=n;i=i+3)
     { if(i+j<=n)
	   k=k+a[j+i];
	   if(i+c<=n)
       m=m+a[c+i];
       if(d+i<=n)
       t=t+a[d+i];
     }
  printf("%lld %lld %lld",k,m,t);
}

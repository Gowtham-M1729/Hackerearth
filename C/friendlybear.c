long long int  mod(long long int *i,long long int *j,long long int k);
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{ long long int i,j,k,n,c,d,a[100000],b[100000];
  scanf("%lld",&n);
  for(i=1,c=0;i<=n;i++)
     { scanf("%lld %lld",&a[i],&b[i]);
      // printf("%lld %lld %lld\n",a[i],b[i],d);
      d=mod(a,b,i);
      //printf("%lld %lld %lld\n",a[i],b[i],d);
      c=c+d;
     }
  printf("%lld",c);
}
long long int mod(long long int *a,long long int *b,long long int i)
 { long long int j,k,n,d;
   for(j=i,d=0;j>=1;j--)
      { d=d+fabs(a[j]-a[i])+fabs(b[j]-b[i]);
         printf("%lld %lld %lld %lld\n",a[i]-a[j],b[i]-b[j],a[i]-a[j]+b[i]-b[j],d);
      }
       return d;
 }

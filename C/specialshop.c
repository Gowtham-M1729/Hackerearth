#include<stdio.h>
#include<math.h>
void main()
{long long int i,k,n,a,b;
  long double j;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
     { scanf("%lld %lld %lld",&k,&a,&b);
       j=(((b*k)*1.0/(a+b)));
       if(j-(long long int)j>0.5)
         j=(long long int)j+1;
       else
         j=(int)j;
         printf("%d\n",(long long int)((j)*(j)*a+(k-j)*(k-j)*b));
     }
}

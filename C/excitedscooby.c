#include<stdio.h>
int gcd(int n,int k);
void main()
{ long long int i,j,k,n,m;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
     { scanf("%lld %lld %lld",&j,&k,&m);
       if(k==0)
         printf("%d\n",1);
       else if(k<=m)
        {
          if(m%k==0)
            printf("%lld\n",m/k);
          else
            printf("%lld\n",m);
        }
      else
	    { 
		   printf("%d",m/gcd(m,k));

	    }
     }
}
int gcd(int n,int k)

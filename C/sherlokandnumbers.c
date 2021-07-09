#include<stdio.h>
long long int numbers(long long int *a,long long int k,long long int m,long long int l,long long int d);
void main()
{ long long int i,j,k,n,a[100000],m,l,c,d;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
    { scanf("%lld %lld %lld",&k,&m,&l);
      for(j=1,c=0;j<=m;j++)
	  { scanf("%lld",&a[j]);
        if(a[j]<=l)
        { c++;
          d=a[j];

        }
	  }
      if(k-m<l)
       {
        printf("%d\n",-1);
        continue;
       }
        printf("\v");
      for(j=1;a[j]<=l;j++)
         printf("%lld ",a[j]);
      printf("\n");
      printf("%lld\n",c);
      {   l=l+c;
         printf("\v");
        printf("%lld\n",numbers(a,k,m,l,d));

      }
       
    }
}
long long int numbers(long long int *a,long long int k,long long int m,long long int l,long long int d)
{ int i,c;
  for(i=1,c=0;i<=m;i++)
    { if(l==a[i])
	     { i=0;
	       l++;
	       c=0;
              // printf("%lld ",l-1);
	      continue;
	     }
      else
	 { c++;

         }
    if(c==m)
      return l;
		
  	}
	
}
      

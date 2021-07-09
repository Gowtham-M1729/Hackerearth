#include<stdio.h>
#include<math.h>
void main()
{long long int i,j,k,n;
scanf("%lld",&k);
for(i=1;i<=k;i++)
{ scanf("%lld",&n);
   while(1)
   { if(n%2==0)
      { if(log2(n)-(int)log2(n)==0)
        { printf("Yes\n");
          break;
        }
       printf("%lld\n",n/2);
       n=n/2;
      }
      else
      { 
      printf("%lld\n",3*n+1);
      n=3*n+1;
      }
      if(log2(n)-(int)log2(n)==0)
      {
      printf("YES");
      break;
      }
   }
}
}

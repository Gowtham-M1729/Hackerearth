#include<stdio.h>
void main()
{ long int i,j,k,n,a[100],b[100],d=3;
  scanf("%ld",&n);
  a[1]=0;
  a[2]=1;
  b[1]=1;
  b[2]=1;
  for(i=1,d=3;i<=n;i++)
     {  scanf("%ld",&k);
        if(k<=2)
          { printf("%ld %ld\n",a[k],b[k]);
            continue;
          }
        else if(k>=d)
          {  
             for(j=d;j<=k;j++)
               { a[j]=a[j-1]+a[j-2];
                 b[j]=b[j-1]+b[j-2];
               }
           printf("%ld %ld\n",a[k],b[k]);
          }           
        d=k;
    }
}

#include<stdio.h>
void main()
{ int i,j,k,n,c;
  char a[100],b[100];
  scanf("%d",&n);
  scanf("%s",a);
  scanf("%s",b);
  for(i=0,c=0;i<n;i++)
     { if(a[i]<=b[i])
         { c=c+(b[i]-64-(a[i]-64))%13+(b[i]-64-(a[i]-64))/13;
         }
       else
         { c=c+(90-a[i]+b[i]-64)%13+(90-a[i]+b[i]-64)/13;
         }
     }
  printf("%d",c);
}

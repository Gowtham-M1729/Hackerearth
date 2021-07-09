#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,c,a[100],b[100],d;
  scanf("%d",&n);
  for(i=1,j=0,k=0;i<=n;i++)
     { scanf("%d %d",&a[i],&b[i]);
       k=k+a[i];
       j=j+b[i];
     }
printf("%d %d",k/n,j/n);
  for(i=1,c=0,d=0;i<=n;i++)
     { if(abs(a[i]-k/n)<=abs(b[i]-j/n))
         { c=c+abs(a[i]-k/n);
         }
      else if(abs(a[i]-k/n)>=abs(b[i]-j/n))
         { c=c+abs(b[i]-j/n);
         }
     }
printf("%d",c);
}

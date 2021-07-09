#include<stdio.h>
void main()
{ int i,j,k,n,a[100],m;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
       if(i==1)
         { m=a[i];
           k=a[i];
         }
        if(a[i]>=m)
          m=a[i];
        if(a[i]<=k)
          k=a[i];
    }
printf("%d",m+k);
}

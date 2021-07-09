#include<stdio.h>
void main()
{ int i,j,k,n,a[100],t,d=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
       if(i==1)
         { t=a[1];
           k=a[1];
         }
        if(a[i]>t)
          t=a[i];
        if(a[i]<k)
          k=a[i];
      d=d+a[i];
     }
printf("%d %d",d-t,d-k);
}

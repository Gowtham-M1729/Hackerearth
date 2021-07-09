#include<stdio.h>
void main()
{ int i,j,k=0,n,m=-10000005,a[100000],c=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
       if(a[i]>=0)
         { k=k+a[i];
           c++;
         }
       else
        if(a[i]>m)
          m=a[i];
     }
if(k==0)
printf("%d %d",m,1);
else
printf("%d %d",k,c);
}

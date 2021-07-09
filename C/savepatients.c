#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,t,m=0,d,a[100],b[100];
  scanf("%d",&n);
  for(i=1,t=0;i<=n;i++)
     { scanf("%d",&a[i]);
       if(a[i]>t)
         t=a[i];
     }
  for(i=1;i<=n;i++)
     scanf("%d",&b[i]);
  for(i=1;i<=n;i++)
     { for(j=1,k=t,d=0;j<=n;j++)
          { 
            if(a[j]-b[i]>=0 && (a[j]-b[i])<k && a[j]>m)
              { k=a[j]-b[i];
                m=a[j];
                d=1;
              }
          }
       if(d==0)
         { printf("No");
           exit(0);
         }
     }
printf("Yes");
}  

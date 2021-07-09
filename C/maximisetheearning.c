#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d",&k,&m);
       for(j=1;j<=k;j++)
          { scanf("%d",&a[j]);
            if(j==1)
              t=a[j];
            if(a[j]>t)
              { t=a[j];
                c++;
              }
          }
     }
}

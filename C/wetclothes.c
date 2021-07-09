#include<stdio.h>
void main()
{ int i,j,k,n,c,d,m,a[100],b[100],t;
  scanf("%d %d %d",&n,&k,&m);
  for(i=1;i<=n;i++)
     scanf("%d",&a[i]);
  for(i=1;i<=k;i++)
     scanf("%d",&b[i]);
  for(i=2,t=0;i<=n;i++)
     { d=a[i]-a[i-1];
       for(j=1,c=0;j<=k;j++)
          { if(d>=b[j])
              { c++;
              }
            if(c>t)
              { t=c;
              }
          }
       
     }
 printf("%d\n",t);
}


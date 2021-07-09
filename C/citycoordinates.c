#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,a[100],b[100],x,y,x1,y1;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       for(j=1,x=0,y=0,x1=0,y1=0;j<=k;j++)
          { scanf("%d %d",&a[j],&b[j]);
            if(a[j]>0 && a[j]>x)
              x=a[j];
            else if(a[j]<=0 && a[j]<x1)
              x1=a[j];
            if(b[j]>0 && b[j]>y)
              y=b[j];
            else if(b[j]<=0 && b[j]<y1)
              y1=b[j];
          }
        if(abs(x-x1)>=abs(y-y1))
          printf("%d\n",(x-x1)*(x-x1));
        else
          printf("%d\n",(y-y1)*(y-y1)); 
     }
}
            

#include<stdio.h>
void main()
{ int i,j,k,n,c=0,d,m,a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { scanf("%d",&a[i]);
      if(a[i]==1)
        c++;
    }
  scanf("%d",&k);
  for(i=1;i<=k;i++)
     { scanf("%d %d",&m,&d);
       for(j=m;j<=d;j++)
          { if(a[j]==0)
              { a[j]=1;
                c++;
              }
            else
              { a[j]=0;
                 c--;
              }
          }
     }
printf("%d\n",c);
for(i=1;i<=n;i++)
printf("%d ",a[i]); 
}

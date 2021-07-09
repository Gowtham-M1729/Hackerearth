int flip(int *a,int *c,int *m,int *d);
#include<stdio.h>
void main()
{ static int i,j,k,n,c=0,d,m,a[100],b;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { scanf("%d",&a[i]);
      if(a[i]==1)
        c++;
    }
 for(i=1;i<=n;i++)
printf("%d ",a[i]);
  scanf("%d",&k);
  for(i=1;i<=k;i++)
     { scanf("%d %d",&m,&d);
      b=flip(a,&c,&m,&d);
      c=c+b;
     }
printf("%d\n",c);
for(i=1;i<=n;i++)
printf("%d ",a[i]);
}
int flip(int *a,int *c,int *m,int *d)
    { int j,k=0;
       for(j=*m;j<=*d;j++)
          { if(a[j]==0)
              { a[j]=1;
                k++;
               
              }
            else
              { a[j]=0;
                k--;
              }
          }
       
       return (k);
    }


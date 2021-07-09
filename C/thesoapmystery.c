int mystery(int *a,int i,int j,int k,int n);
#include<stdio.h>
void main()
{ int i,j,k,n,t,m=0,c,d,a[100000];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
       if(a[i]>m)
         m=a[i];
       if(i==1)
         t=a[i];
       if(a[i]<t)
         t=a[i];
     }
  scanf("%d",&k);
  mystery(a,k,m,t,n);
}
int mystery(int *a,int k,int m,int t,int n)
 {  int i,j,c,d;
  for(i=1;i<=k;i++)
     { scanf("%d",&j);
       if(j>m)
         printf("%d\n",n);
       else if(j<t)
         printf("%d\n",0);
       else
         { for(d=1,c=0;d<=n;d++)
              { if(a[d]<j)
                  c++;
              }
           printf("%d\n",c);
         }
     }
 }


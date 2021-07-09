#include<stdio.h>
void main()
{ int i,j,k,n,m,c;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       scanf("%s",a);
       for(j=0,c=0;j<k;j++)
          { if(a[j]<=58 && a[j]>=48)
              { c++;
                for(m=j+1;m<k ;m++)
                   { if(a[m]<48 || a[m]>58)
                      break;
                   }
                j=m;
              }
          }
       printf("%d",c);
     }
}
               
            

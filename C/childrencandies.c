#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d",&j,&k);
       for(j=1;j<=k;j++)
          { if(j%2==0)
              j=j-j/2;
            else
              j=j-(j+1)/2;
            j=j-j/4;
          }
       printf("%d",j);
     }
}

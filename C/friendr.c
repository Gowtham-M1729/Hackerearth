#include<stdio.h>
void main()
{ int i,j,k,n,m;
scanf("%d",&n);
 for(i=1;i<=n;i++)
  { scanf("%d",&k);
    for(j=1;j<=k;j++)
      { for(m=0;m<j;m++)
          printf("*");
        for(m=0;m<2*k-2*j;m++)
          printf("#");
        for(m=0;m<j;m++)
          printf("*");
          printf("\n");
      }
  }
}
      

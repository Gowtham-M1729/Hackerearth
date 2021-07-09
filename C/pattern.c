#include<stdio.h>
void main()
{ int i,j,k,n,l,r,s;
  scanf("%d",&n);
 for(i=1;i<=n;i++)
    { for(j=n;j>n-(i-1);j--)
        printf("%d ",j);
      for(j=1;j<=2*n-1-2*(i-1);j++)
         printf("%d ",n-(i-1));
      for(j=n-(i-1);j<n;j++)
      printf("%d ",j+1);
      printf("\n");
    }
 for(i=0;i<n-1;i++)
    { for(j=n;j>2+i;j--)
        printf("%d ",j);
     for(j=1;j<=2*(i+1)+1;j++)
         printf("%d ",2+i);
      for(j=3+i;j<=n;j++)
        printf("%d ",j);
       printf("\n");
}
}
      

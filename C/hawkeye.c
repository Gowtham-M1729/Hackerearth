#include<stdio.h>
void main()
{ int i,j,k,n,l,r,s;
  scanf("%d",&n);
 for(i=1;i<=(n/2)+1;i++)
    { for(j=0;j<i-1;j++)
        printf("%d ",j);
      for(j=1;j<=n-2*(i-1);j++)
         printf("%d ",i-1);
      for(j=i-1;j>0;j--)
      printf("%d ",j-1);
      printf("\n");
    }
 for(i=0;i<n/2;i++)
    { for(j=0;j<(n/2)-i;j++)
        printf("%d ",j);
     for(j=1;j<=2*i+1;j++)
         printf("%d ",(n/2)-(i+1));
      for(j=(n/2)-1-i;j>=0;j--)
        printf("%d ",j);
       printf("\n");
}
}
      

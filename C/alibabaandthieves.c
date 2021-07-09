#include<stdio.h>
void main()
{ int i,j=0,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { scanf("%d",&k);
      if(k>0)
        j=j+k;
    }
  printf("%d",j);
}

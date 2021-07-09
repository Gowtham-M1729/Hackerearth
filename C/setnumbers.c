#include<stdio.h>
#include<math.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       j=log2(k);
       if((int)pow(2,j+1)-1==k)
         printf("%d",k);
       else
       printf("%d\n",(int)(pow(2,j)-1));
     }
}

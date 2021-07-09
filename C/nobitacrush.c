#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d",&j,&k);
       if((j/k)%2==1)
         printf("Nobita");
       else
         printf("Dekisugi");
     }
}

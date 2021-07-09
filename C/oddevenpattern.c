#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
     {  if(i%2==1)
           for(j=1;j<=(i+1)/2;j++)
              { printf("%d",2*j-1);
                printf("*");
              }
        else
         for(j=0;j<=(i+1)/2;j++)
            { printf("*");
              if(2*(j+1)<=i)
              printf("%d",2*(j+1));
            }
        printf("\n");
     }
}

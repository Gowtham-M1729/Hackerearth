#include<stdio.h>
void main()
{ int i,j,k,n;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%s",a);
       for(j=0;a[j]!='\0';j++)
          { if(a[j]<=90 && a[j]>=65)
              { if(j==0)
                  printf("%c",a[j]+32);
                else
                  printf("_%c",a[j]+32);
              }
            else
              printf("%c",a[j]);
          }
     }
} 


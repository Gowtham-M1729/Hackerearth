#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,c,d;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%s",a);
       d=strlen(a);
       for(j=0;j<d;j++)
          { if(a[j]=='W' && a[j+1]=='U' && a[j+2]=='B')
              { j=j+2;
                continue;
              }
            else
              for(k=j,c=0;(a[k]!='W' || a[k+1]!='U' || a[k+2]!='B') && k<d;k++)
                 { printf("%c",a[k]);
                   c=1;
                 }
              j=k+2;
             if(c==1)
               printf(" ");
          }
      printf("\n");
     }
}
            
              

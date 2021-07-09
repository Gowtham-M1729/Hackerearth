#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n;
  char a[1000];
  fgets(a,1000,stdin);
  for(i=0;a[i]!='\0';i++)
     { if(i==0)
         { if(a[i]=='t' && a[i+1]=='o' && a[i+2]==' ' && a[i+3]=='t' && a[i+4]=='h' && a[i+5]=='e' && (a[i+6]==' ' || a[i+6]=='\0'))
             { printf("YES");
               exit(0);
             }
         }
       else
         if( a[i-1]==' ' && a[i]=='t' && a[i+1]=='o' && a[i+2]==' ' && a[i+3]=='t' && a[i+4]=='h' && a[i+5]=='e' && (a[i+6]==' ' || a[i+6]=='\0'))
            { printf("YES");
              exit(0);
            }
     
     }
   printf("NO");
}

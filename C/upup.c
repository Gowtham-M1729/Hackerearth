#include<stdio.h>
void main()
{ int i,j,k,n,c;
  char a[100],b[100];
  fgets(a,100,stdin);
  for(i=0,c=0;a[i]!='\0';i++)
     { 
         c++;
         if(a[i+1]==' ')
           { a[i+2]=a[i+2]+32;
             c=0;
             i=i+2;
           }
     }
  puts(a);
}

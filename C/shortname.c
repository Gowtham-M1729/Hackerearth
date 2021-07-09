#include<stdio.h>
void main()
{ int i,j,k,n,c;
  char a[100],b[100];
  fgets(a,100,stdin);
  for(i=0,c=0;a[i]!='\0';i++)
     { 
         c++;
         if(a[i+1]==' ')
           { printf("%c. ",a[i-c+1]);
             c=0;
             i++;
           }
         else if(a[i+1]=='\0')
           { printf("\b");
             for(j=i-c;a[j]!='\0';j++)
                printf("%c",a[j]);
           }
     }
}

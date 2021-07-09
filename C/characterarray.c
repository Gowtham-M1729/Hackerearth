  
#include <stdio.h>
#include<string.h>
  
int main() 
{ 
    int i,j,n,k; 
    char a[2000][60]; 
  
    for (i = 0; i!=EOF; i++) 
       { fgets(a[i],60,stdin);
          
       }
    for (i = 0; i < 3; i++) 
       { for(j=0;a[i][j]!='\0';j++)
          { if(a[i][j]=='/' && a[i][j+1]=='/')
              break; 
            if(a[i][j]=='-' && a[i][j+1]=='>')
              { a[i][j]='.';
                for(k=j+1;a[i][k]!='\0';k++)
                   { a[i][k]=a[i][k+1];
                   }
                a[i][k]='\0';
              }
            if(a[i][j]=='\n')
              a[i][j]='\0';
          }
         
       }

  
    for (i = 0; i < 3; i++) 
        puts(a[i]);
  
    return 0; 
} 

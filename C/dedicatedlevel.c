  
#include <stdio.h>
#include<string.h>
  
int main() 
{ 
    int i,j,n,k,b[100],t=0; 
    char a[2000][60]; 
    scanf("%d",&n);
    for (i = 1; i<= n; i++) 
       { 
         scanf("%s",a[i]);
         scanf("%d",&b[i]);
         if(b[i]>t)
           { t=b[i];
             m=i;

           } 
       }
       puts(a[m]);
   for(i=1,k=0;i<=n;i++)
      { if(a[i]>k && a[i]<t)
          { t=a[i];
            m=i;
         }
        if(i==n)
          { puts(a[m]);
            i=1;
            c++;
            if(c==2)
              exit(0);
          }
      }
    
  
    return 0; 
} 


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     static int i,b[10000],c;
     char a[1000000];
     scanf("%s",a);
     for(i=0;a[i]!='\0';i++)
         b[(int)a[i]-96]=b[(int)a[i]-96]+1;
    for(i=1,c=1;i<=26;i++)
        printf("%d ",b[i]);
    for(i=2,c=1;i<=26;i++)
    {
        if(b[i]==0)
            continue;
        else if(b[i]==b[i-1])
            continue;
        else if(fabs(b[i]-b[i-1])==1.0)
         { if(b[i-1]==0 || b[i]==0)
             continue;
         
           if(c==1)
           { 
            c++;
               b[i]=b[i]-1;
            continue;
           }
           else
           {printf("NO\n");
           exit(0);  
           }   
         }
        else if(fabs(b[i]-b[i-1])>1.0)
        { printf("NO\n");
          exit(0);
            
        }
            
    
    }
    printf("YES\n");
           
    return 0;
}


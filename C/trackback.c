#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
int i,j=0,k,n,p,m;
    static int b[100];
    char a[100];
    scanf("%d",&n);
 scanf("%s",a);
    for(i=0;i<n;i++)
    {  if(a[i]==a[i+1])
           b[j]++;
       else
       { b[j]++;
          j++;
        }
    }
    //for(m=1;m<=2;m++)
     for(k=0;k<j;k++)
     { if(b[k]%2==0)
             for(i=k;i<n;i++)
             { a[i]=a[b[k]+i];
             }
       else
           for(p=k+1;p<n;p++)
           { a[p]=a[b[k]+p-1];
           }
        
     }
    
    puts(a);
    return 0;
}




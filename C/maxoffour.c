#include <stdio.h>

int max of four(int *a);


int main() {
    int a[4];
    scanf("%d %d %d %d", &a[1], &a[2], &a[3], &a[4]);
    int ans = max of four(a);
    printf("%d", ans);
    
    return 0;
}
int max of four(int *a)
   { int j=1,c=0,i;
       for(i=1;i<=4;i++)
          { 
              if(a[j]-a[i]>=0)
                c++;
                if(c==4)
                  return(a[j]);
               else if(i==4)
                { i=0;
                  c=0;
                  j++;
                }

                
          }
   }

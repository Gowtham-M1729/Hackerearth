#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    char str[1000];
    int count = 0,j,i,c=0;

    scanf("%s",str);
   for(j=0;str[j]!='\0';j++)
   {
    for (i = 0,c=0; str[i] != '\0'; i++) 
        { if (str[j]== str[i])
            { c=c+1;
              // printf("%d %c\n",c,str[j]);
            }
        }
        if(c==2)
            printf("%c",str[j]);
    
    }

    return 0;
}


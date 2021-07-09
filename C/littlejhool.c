#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,c=0;
  char a[100];
scanf("%s",a);
for(i=1;a[i]!='\0';i++)
{ if(a[i]==a[i-1])
    { c++;
      if(c==5)
        { printf("sorry, sorry!");
          exit(0);
        }
      else
        continue;
    }
  else
   c=0;
}
printf("Good luck!");
}

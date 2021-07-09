#include<stdio.h>
#include<math.h>
void main()
{ static int i,j,n,a[100];
char k[100];
   scanf("%s",k);
    for(j=0;k[j]!='\0';j++)
       { a[k[j]-48]=a[k[j]-48]+1;
       }
	   for(i=0;i<10;i++)
	   printf("%d %d\n",i,a[i]);
 
}


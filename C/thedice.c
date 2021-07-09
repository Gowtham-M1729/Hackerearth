#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n;
  char a[10000];
  scanf("%s",a);
  k=strlen(a);
  if(a[k-1]=='6')
    printf("%d",-1);
for(i=0;a[i]!='\0';i++)
   { if(a[i]=='6')
       k--;
   }
printf("%d",k);
}

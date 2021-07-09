#include<stdio.h>
#include<string.h>
void main()
{ int i=0,j=0,k,n,c;
char a[100];
scanf("%s",a);
c=strlen(a);
for(k=0;k<c;k++)
{ if(a[k]=='L')
  i=i-1;
  if(a[k]=='R')
  i=i+1;
  if(a[k]=='D')
  j--;
  if(a[k]=='U')
  j++;
}
printf("%d %d",i,j);
}



#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,b,c;
  char a[20000];
fgets(a,1000,stdin);
k=strlen(a);
n=k;
for(i=0;i<n;i++)
 { if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u' a[i]==' ')
       k--;

 }
printf("%d\n",k);
}


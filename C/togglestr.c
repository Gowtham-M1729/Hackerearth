#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n;
char a[1000000];
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{ if(a[i]<='z' && a[i]>='a')
    a[i]=(int)a[i]-32;
 else if(a[i]<='Z' && a[i]>='A')
    a[i]=(int)a[i]+32;
}
puts(a);
}

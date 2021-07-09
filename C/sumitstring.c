#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,c;
char a[100];
scanf("%d",&n);
for(j=1;j<=n;j++)
{
scanf("%s",a);
k=strlen(a);
for(i=0,c=0;a[i]!='\0';i++)
 { if(a[i]=='z' && a[i+1]=='a' || a[i]=='a' && a[i+1]=='z')
     { c++;
     }
   else if(abs((int)a[i]-(int)a[i+1])==1)
     c++;
   else
   {
   break;
   }
   if(i+2>k)
   break;
 }
if(c==k-1)
printf("YES\n");
else
printf("NO\n");
}
}


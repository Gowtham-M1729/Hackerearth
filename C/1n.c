#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void main()
{  int i,j,k=0,n,b=0,d;
scanf("%d",&n);
char a[100];
for(i=sqrt(pow(10,n-1)); ;i++)
{  
   k=i*i;
   sprintf(a,"%d",k);
 printf("%s\n",a);
    d=strlen(a);
b=0;
for(j=0;j<d;j++)
{ if(a[j]=='1')
   b++;
}
if(b==n)
{ printf("%s",a);
exit(0);
}
}
}

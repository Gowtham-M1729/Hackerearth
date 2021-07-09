#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n;
char a[100];
scanf("%s",a);
if(a[2]=='A' || a[2]=='E' || a[2]=='I' || a[2]=='O' || a[2]=='U' || a[2]=='Y')
{ printf("invalid");
   exit(0);
}
for(i=1;a[i]!='\0';i++)
 { if((a[i-1]+a[i])%2==1)
      { printf("invalid");
        exit(0);
      }
    if(i+1==2 || i+1==6)
   { i=i+2;
      
   }
 }
printf("valid");
}

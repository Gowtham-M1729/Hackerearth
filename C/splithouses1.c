#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,c;
char a[100];
scanf("%d",&n);
scanf("%s",a);
for(i=0;i<n;i++)
 { if(a[i]=='H' && a[i+1]=='H')
     {  printf("NO");
        exit(0);
     }
  else  if(a[i]=='.')
    { a[i]='B';
     
    }
 }
printf("YES\n");
puts(a);    
}

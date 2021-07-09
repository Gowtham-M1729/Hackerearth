#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{ int i,j,k=0,b,d;
char a[20];
scanf("%s",a);
b=strlen(a);
for(i=0,j=b-1;i<(b/2)+1,j>(b/2)-1;i++,j--)
if(a[i]==a[j])
k++;
if(k==(b/2)+1)
printf("YES");
else if(b%2==0)
if(k==b-1)
printf("YES");
else
printf("NO");
}    


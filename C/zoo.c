#include<stdio.h>
#include<string.h>
void main()
{  int i,j,k,x=0,y=0,b;
char a[100];
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;i++)
{if(a[i]=='z')
x++;
if(a[i]=='o')
y++;
}
if((2*x)==y)
printf("Yes");
else
printf("No");}

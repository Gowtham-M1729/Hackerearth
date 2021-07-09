#include<stdio.h>
void main()
{unsigned char a[100];
int i,j,k,n;
for(i=0;a[i-1]!='\n';i++)
scanf("%c",&a[i]);
a[i]='\0';
for(i=0;a[i-1]!='\n';i++)
printf("%c\t",a[i]);
puts(a);
}

#include<stdio.h>
void main()
{ int i,j,k,n;
char a[100];
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
 { k=k+(int)a[i]-96;
 }
printf("%d",k);
}

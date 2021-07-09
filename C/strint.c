#include<stdio.h>
#include<math.h>
void main()
{ int i,j=0,k=0,n,b,c;
char a[20];
printf("enter the value for n");
scanf("%d",&n);
printf("enter the string");
scanf("%s",a);
for(i=n-1;i>=0;i--)
printf("%c",a[i]);
printf("\v");
for(i=n-1,k=0;i>=0;i--)
{ if(a[i]>=49 && a[i]<=59)
 
{ k=k+(a[i]-48)*pow(10,j);

 j++;
 }
 
}
printf("%d",k);
}



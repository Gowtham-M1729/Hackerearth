#include<stdio.h>
void main()
{ long int i,j,k=0,n;
scanf("%ld",&n);
for(i=11;i>=2;i--)
 { k=k+(n%10)*(i-1);
   n=n/10;
 }
printf("%ld",k);
if(k%11==0)
printf("Legal ISBN");
else
printf("Illegal ISBN");
}

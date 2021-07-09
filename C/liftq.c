#include<stdio.h>
void main()
{ int i,j,a,k,n;
scanf("%d",&k);
a=0;
j=7;
for(i=1;i<=k;i++)
{
scanf("%d",&n);
if((j-n)>=(n-a))
{ 
printf("A\n");
a=n;
}
else
{
printf("B\n");
j=n;
}
}
}


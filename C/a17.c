#include<stdio.h>
void main()
{
int a,i,j,k,n;
printf("enter the vaklue for n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{    for(j=0;j<=n-i;j++)
       { printf(" ");
       }
for(k=0;k<2*i-1;k++)
printf("*");
if(i!=n)
printf("\n");
}
printf("\f");
for(i=0;i<=n;i++)
{
    for(j=0;j<=n-i;j++)
       { printf(" ");
       }
for(k=0;k<2*i-1;k++)
printf("*");
printf("\n");
}

}


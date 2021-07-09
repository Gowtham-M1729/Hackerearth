#include<stdio.h>
void main()
{
int a,i,j,k,n;
printf("enter the vaklue for n");
scanf("%d",&n);
a=n;
for(i=0;i<=n*2;i++)
{   if(i<=n)
{ 
for(j=0;j<=n;j++)
       { printf(" ");
       }
for(k=0;k<i+1;k++)
printf("*");
printf("\n");
}
else //if(i<=2*n && i>=n)
{ //if(m!=2)

for(k=0;k<n*2+2+2;k++)

printf("*");
printf("\n");

}
}

{ 
for(i=0;i<=n;i++)
{
for(j=0;j<=n;j++)
       { printf(" ");

       }
for(j=n-i;j>=0;j--)
printf("*");
printf("\n");
}
}
}

#include<stdio.h>
void main()
{ int i,j,k,m,n,a[10][10],b[10][10],c=1,p,q,r,l;
scanf("%d",&n);
for(i=1;i<=n;i++)
for(j=1;j<=2;j++)
scanf("%d",&a[i][j]);
printf("\v");
for(i=1;i<=n;i++)
{
 for(j=1;j<=2;j++)
printf("%d\t",a[i][j]);
printf("\n");
}

b[1][1]=a[1][1];
b[1][2]=a[1][2];
c=3;
r=1;
for(k=2;k<=n;k++)
{l=k;
c=3;
for(i=2;i<=n;i++)
{ 
 if(a[k][1]==b[r][c-1])
 {
 b[r][c]=a[k][2];
 c++;
 k=i+1;
 }
 else
 for(m=i;m<=n;m++)
 { 
 if(a[m][1]==b[r][c-1])
 { b[r][c]=a[m][2];
 c++;
 }
 }
 //printf("%d\n",c);
}

for(p=1;p<=r;p++)
 for(q=1;q<c;q++)
 printf("%d\t",b[p][q]);
 printf("\n");
 
c=1;
 r++;
 b[r][1]=a[k][1];
 b[r][2]=a[k][2];
k=k-2;
} 
}

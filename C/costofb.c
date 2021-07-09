#include<stdio.h>
int l;
void main()
{ int i,j,k,n,a[20][20],m,q,p,r,b,c;
scanf("%d",&n);
 for(i=1;i<=n;i++)
{  scanf("%d %d",&k,&j);
   scanf("%d",&p);
   m=0;q=0;
   for(b=1;b<=p;b++)
     for(c=1;c<=2;c++)
       { scanf("%d",&a[b][c]);
         if(a[b][c]==1)
         { if(c==1)
           m++;
           else
           q++;
           
         }
     
       }
r=((m*k+j*q)<(m*j+k*q))?(m*k+j*q):(m*j+k*q);
printf("%d\n",r);
}
}


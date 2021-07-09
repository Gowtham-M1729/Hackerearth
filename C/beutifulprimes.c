#include<stdio.h>
void main()
{ long int i,j,k=0,a[20000],n,r,b[20000],c,m;
printf("enter the number");
scanf("%ld",&n);
for(j=1;j<=n;j++)
{ scanf("%ld",&k);
  for(c=1,m=1;c<=2*k;c++)
   { if(c<=k)
       scanf("%ld",&a[c]);
     else
     {
       scanf("%ld",&b[c-k]);
       m=m*a[c-k]*b[c-k];
     }
   }
for(i=1;m>0,i<=k;)
{ if(m%a[i]==0)
       { printf("%ld\t",a[i]);
          m=m-(m)/(a[i]);
         continue;
       } 
 else
  i++;
}
}
}

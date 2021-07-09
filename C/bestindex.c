#include<stdio.h>
void main()
{ int i,j,k,n,a[100],t;
scanf("%d",&n);
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
j=a[1];
printf("\n");
for(i=1;i<=n;i++)
 { k=0; t=i;
    if(i+2<=n)
    { while((1))
     { 
       k=k+a[i]+a[i+1]+a[i+2];
       printf("%d\t",k);
       if(i+5<=n)
       i=i+3;
       else
       break;
     }
    }
  else
  k=a[i];
  if(k>j)
   j=k;
printf("%d\n",k);
i=t;
 }
printf("%d",j);
}
  

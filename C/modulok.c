#include<stdio.h>
void main()
{ int i,j,k,n,a[1000],t=100000,m,c;
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {  scanf("%d",&a[i]);
    if(a[i]>t)
    t=a[i];
 }
//printf("%d\n",t);
   for(k=2;k<t/2;k++)
    { m=a[1]%k; c=0;
     //printf("%d\n",m);
        for(j=2;j<=n;j++)
          { 
            if(m==a[j]%k)
             { 
               c++;
               continue;
             }
            else
            break;
          }
      if(c==n-1)
       printf("%d ",k);
    }
}
       


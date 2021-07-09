#include<stdio.h>
#include<stdlib.h>
void main()
{ unsigned long long int i,t=0,j=0,k=0,a[100000],n,p,q=0,c=0;
scanf("%lld",&n);

for(i=0;i<n;i++)
 {
 scanf("%lld",&a[i]);
 k=k+a[i];
 }
 
 for(i=0;i<n;i++)
 {
 
    if((k-a[i])%7==0)
    {  if(a[i]==0)
        { t=i;
          break;
        }
       c=1;
       q=a[i];
       if(j==0)
       p=q;
     if(p>q)
      { 
        p=q;
        t=i;
     
      }
       j++;
    }
    
 }
 if(c==1)
 printf("%lld",t);
 if(c==0)
 printf("-1");

}

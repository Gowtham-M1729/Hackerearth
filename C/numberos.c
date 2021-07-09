#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j=0,k,n,a[5000],b[5000],t=1;
k=50000;
scanf("%d",&n);
 for(i=1;i<=n;i++)
  { 
    scanf("%d",&a[i]);
    if(i==1)
      k=a[1];
    if(a[i]<k)
     {
       k=a[i];
       t=i;
     }  
  }
 for(i=1;i<=n;i++)
   scanf("%d",&b[i]);
for(i=1;i<=n;i++)
{  if(a[i]==k)
     continue;
   else
     while(1)
      {  
         if(a[i]>=b[i])
           { 
              a[i]=a[i]-b[i];
              j++;
           }
         if(a[i]==k)
          break;
         if(a[i]<k)
          { 
             k=k-b[t];
             i=0;
             j--;
             a[i]=a[i]+b[i];
             break;
          } 
       }
	else
	{ printf("-1");
	  exit(0);
	}
   }
}
printf("%d",j);
}


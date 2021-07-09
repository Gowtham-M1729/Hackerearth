#include<stdio.h>
void main()
{ int i,j=1,k,n,c,a[10000];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
     }
   for(i=2,j=1,c=0;i<=n && j<=n;i++)
   {
      if(a[j]>a[i])
       { c++;
         if(c==n-j)
           {  printf("%d ",a[j]);
              c=0;
              j++;
              i=j;
           }    
         continue;
       } 
      else if(i<n)
       { c=0;
	 j++;
	 i=j;
         continue;
       }
   }
		printf("%d",a[n]);
}

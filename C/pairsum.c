#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,a[100],c;
  scanf("%d %d",&n,&k);
  for(i=1;i<=n;i++)
     scanf("%d",&a[i]);
  for(i=1;i<=n;i++)
     {  for(j=i+1,c=0;c<=n/2;j++,c++)
           { if(a[i]+a[j]==k || (a[i]+a[n-c])==k)
               { printf("YES");
                 exit(0);
               }
           }
     }
}
 

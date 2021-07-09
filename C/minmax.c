#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j=0,k,n,m,a[100],c;
  scanf("%d %d %d",&n,&m,&k);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
       if(a[i]>k || a[i]<m)
         { printf("NO");
           exit(0);
         }
     }
  printf("YES");

  //if((j==((k*(k+1)/2)-(m*(m+1)/2)+1)) && n==(k-m+1))
    //printf("YES");

  //else
    //printf("NO");
}

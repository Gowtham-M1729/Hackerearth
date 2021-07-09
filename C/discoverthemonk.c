#include<stdio.h>
#include<stdlib.h>
void main()
{ static int i,j,k,n,a[100000],b[100000];
  scanf("%d %d",&n,&k);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
       if(a[i]>100000)
         b[a[i]]=b[a[i]]+1;
       else
         b[a[i]/10000]++;
     }
  for(i=1;i<=k;i++)
     { scanf("%d",&j);
       if(j>100000)
         { if(b[j]>0)
             printf("YES");
           else
             printf("NO");
         }
       else
         { if(b[j/10000]>0)
              printf("YES");
           else
             printf("NO");
         }
     }
  
}

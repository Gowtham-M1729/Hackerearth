#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       for(j=1,c=0,d=0;j<=k;j++)
          { scanf("%d %d %d",&x,&y,&z);
            if(x+y+z-k<0)
              c++;
            if(x+y+z-k>0)
              d++;
          }
       if(c==d)
         printf("YES");
       else
         printf("NO");
     }
}

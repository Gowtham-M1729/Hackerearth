#include<stdio.h>
void main()
{ int i,j,k,n,a[100],b,c,d,t;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       for(j=1,c=0,d=2;j<=k;j++)
          { scanf("%d",&b);
            if(j==1)
              t=b;
            if(b<=t)
              { t=b;
                a[d]=t;
                if(a[d]==a[d-1])
                  { c++;
                    d++;
                  }
                else
                  { c=0;
                    d=1;
                    a[d]=t;
                    d++;
                  }
              }
          }
       if((c+1)%2==0)
         printf("Unlucky");
       else
         printf("Lucky");
     }
}

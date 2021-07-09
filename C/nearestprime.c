#include<stdio.h>
void main()
{ int i,j,k,n,m,c=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
 { scanf("%d",&k);
   m=k;
   k++;
   m--;
   while(1)
     { (k=k-1);
         { for(j=2;j<k;j++)
              if(k%j==0) 
                { c=1;
                }
              if(c==0)
                { printf("%d\t",k);
                  break;
                }
               c=0;
         }
        (m=m+1);
         {   for(j=2;j<m;j++)
              if(m%j==0) 
                { c=1;
                }
              if(c==0)
                { printf("%d\t",m);
                  break;
                }
               c=0;
         }
         
      }
 }
}

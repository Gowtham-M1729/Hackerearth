#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{ int i,j,k,n,m,c,d,b;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d %d %d",&j,&k,&m,&d);
       b=m-d;
       if(b>=0)
         printf("%d\n",0);
       else if(b<0)
         { c=pow(k,2)-4*j*b;
           if(((sqrt(c)-k)/(2*j))-(int)((sqrt(c)-k)/(2*j))==0.0)
             printf("%d\n",(int)((sqrt(c)-k)/(2*j)));
           else
             printf("%d\n",(int)((sqrt(c)-k)/(2*j))+1);
         }    
     }
}

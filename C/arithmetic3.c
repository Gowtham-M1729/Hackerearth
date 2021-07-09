#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,a,b,c,d;
  scanf("%d",&n);
 for(i=1;i<=n;i++)
    { d=0;
      scanf("%d %d %d",&a,&b,&c);
      k=c+a;
      if(k%2==1)
       { d=1;
        d=abs(b-((k/2)));
        if(a<0 || c<0)
        printf("%d\n",d);
        else
         printf("%d\n",d);
       }
      else
       {d=abs(b-(k/2));
        printf("%d\n",d);
       }
    }
}
             

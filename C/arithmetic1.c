#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,a,b,c,d;
  scanf("%d",&n);
 for(i=1;i<=n;i++)
    { d=0;
      scanf("%d %d %d",&a,&b,&c);
      k=abs(c-a);
      if(c>a)
       { if(b>c-k/2)
           { 
          
            d=abs(b-(c-k/2));
           }
         else
           { 
             d=abs((c-k/2)-b);
           }
       }
      else
        {  if(b>a-k/2)
           { 
          
            d=abs(b-(a-k/2));
           }
         else
           { 
             d=abs((a-k/2)-b);
           }
             if((a+c)%2==1)
               d=d+1;
        }
     
   // if(k%2==0)
 //  printf("%d",d+1);
  //  else
   printf("%d",d);
    }
}
           

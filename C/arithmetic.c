#include<stdio.h>
void main()
{ int i,j,k,n,a,b,c,d;
  scanf("%d",&n);
 for(i=1;i<=n;i++)
    { d=0;
      scanf("%d %d %d",&a,&b,&c);
      k=c-a;
      while(1)
       { if(b>c-k/2)
           { 
           if(b==c-k/2)
               break;
             b--;
             d++; 
           }
         else
           { 
              if(b==c-k/2)
               break;
              b++;
              d++;
           }
        }
    if(k%2==0)
   printf("%d",d);
    else
   printf("%d",d+1);
    }
}
             

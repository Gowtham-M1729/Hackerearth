#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,a,t,c=1;
 scanf("%d %d %d",&n,&k,&a);
 if(n>=k && n>=a)
   for( ;;)
  {
   if(abs(k-(n-2))<=1 || abs(a-(n-2))<=1)
    { n=n-2;
      break;
      
    }
    else
    { n=n-2;
      c++;
    }
 }
 else if(k>=n && k>=a)
   for( ;;)
 {  if(abs(n-(k-2))<=1 || abs(a-(k-2))<=1)
    { k=k-2;
     break;
    }
    else
    {
     k=k-2;
     c++;
    }
 }
 else
   for( ;;)
 {  if(abs(n-(a-2))<=1 || (k-(a-2))<=1 )
    { a=a-2;
      break;
      
    }
    else
    { a=a-2;
      c++;
    }
 }
if(n>=k && n>=a)
   t=n;
 else if(k>=n && k>=a)
   t=k;
 else
   t=a;
printf("%d",t+c);

}


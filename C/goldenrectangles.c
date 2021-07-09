#include<stdio.h>
#include<math.h>
void main()
{ int i,j,k,n,c=0,b,m,t;
  float d;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    {  scanf("%d %d",&j,&k);
     t=(j>k)?j:k;
     if(t==k)
     m=j;
     else
     m=k;
      d=t*1.0/m*1.0;
      d=(int)(d*100);
      b=(int)d;
     if(b>=160 && b<=170)
       c++;
   }
printf("%d",c);
}

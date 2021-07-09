int hexa(int i);
int gcd(int i,int j);
#include<stdio.h>
void main()
{ int i,j,k,n,d,c,m;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d",&k,&m);
       for(j=k,c=0;j<=m;j++)
          { if(j==1)
              continue;
            d=hexa(j);
            if(d>1)
              c++;            
          }
       printf("%d\n",c);
     }
}
int hexa(int k)
 { int i,j=0;
   i=k;
   for( ;k>0;k=k/16)
      { j=j+k%16;
      }
   return(gcd(i,j));
 }
int gcd(int i,int j)
  {    if (j == 0) 
		return i; 
	return gcd(j, i % j);
  }

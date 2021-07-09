int binary(int n);
#include<stdio.h>
void main()
{ int i,j,k,n,m;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
    { scanf("%d %d",&k,&j);
      m=k^j;
   
      printf("%d\n",binary(m));
    }
}
int binary(int n)
 { int i,j,c=0; 
   for(i = 0; n > 0; i++)
    {
        j =n % 2;
        n = n / 2;
        if(j==1)
          c++;
    }
  return(c);
}

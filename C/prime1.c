#include<stdio.h>
void main()
{
	unsigned int i,j,k=0,n,l,r,b,d,c,m;
	scanf("%d",&n);
	for(m=1;m<=n;m++)
  {       d=0;
	scanf("%d %d",&l,&r);
	c=(l>=r)?l:r;
	if(c==r)
	b=l;
	else
	b=r;
    for(i=b;i<=c;i++)
     {  if(i%2==0 && i!=2)
         continue;
    else
       for(j=1;j<=i;j++)
           if(i%j==0) 
          {   k++;
          }
        if(k<=2 && i!=1)
             d++;
         k=0;
     }
   printf("%d\n",d);
    d=0;
  }

}

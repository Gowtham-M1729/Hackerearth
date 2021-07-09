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
{
    if(i<10)
if(i==2 || i==3 || i==5 || i==7)
d++;
          if(i>10)
{
           if(i%3==0 || i%5==0 || i%7==0 || i%9==0) 
          { 
            continue;
          }
else
{
         d++;
         k=0;
          }
}
}
     }
   printf("%d\n",d);
    d=0;
  }

}

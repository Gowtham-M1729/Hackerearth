#include<stdio.h>
void main()
{ int i,j;
  long long int n,k,a,t,sum=0;
  printf("enter the value for a");
  scanf("%lld",&a);
  printf("enter the value for n");
  scanf("%lld",&n);
  //sum=a;
  for(i=1;i<=n;i++)
  {  t=sum;
      if(a==1)
       t=a;
       a=0;
     for(j=0,k=0;t>=1;t=t/10)
        k=k+t%10;
     sum=k+a+sum;
      a=0;
  }
  printf("%lld",sum);
}

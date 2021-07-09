#include<stdio.h>
void main()
{ int i,j,k=0,n;
scanf("%d",&n);
if(n/5>0)
{ k=k+n/5;
 n=n%5;
}
if(n/4>0)
{ k=k+n/4;
  n=n%4;
}
if(n/3>0)
{ k=k+n/3;
  n=n%3;
}
if(n/2>0)
{ k=k+n/2;
  n=n%2;
}
k=k+n;
printf("%d",k);
}


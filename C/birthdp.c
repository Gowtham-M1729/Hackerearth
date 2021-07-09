#include<stdio.h>
void main()
{ int i,j,k,n,b;
  float c;
scanf("%d",&n);
 for(i=1;i<=n;i++)
  { scanf("%d",&j);
    scanf("%d",&b);
    c=b*1.0/j;
    printf("%f",c);
    if(c-(int)c==0)
    printf("yes");
    else
    printf("no");
  }
}


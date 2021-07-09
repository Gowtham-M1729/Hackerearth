#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,a[4];
scanf("%d",&n);
for(i=1;i<=n;i++)
{ for(j=1;j<=4;j++)
   {  scanf("%d",&a[j]);
      if(j%2==1)
       a[j]=a[j]*60;
   }
printf("%d %d",abs((a[1]+a[2]-a[3]-a[4])/60),abs((a[1]+a[2]-a[3]-a[4])%60));
}
}
  


#include<stdio.h>
#include<math.h>
void main()
{ unsigned int j,a[1000000];
long long unsigned int k=0,i,n;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{ scanf("%d",&a[i]);
  k=k+pow(10,n-i)*(a[i]%10);
}
if(k%10==0)
printf("Yes");
else
printf("No");
}

#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,a[100],n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	k=1;
	for(i=1;i<=n;i++)
	{ for(j=n;j>=1;j--)
            if(a[i]==a[j] && i!=j)
            break;
         if(j==0)
         printf("%d",a[i]);
        }
}

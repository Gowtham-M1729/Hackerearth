/*#include<stdio.h>
void main()
{ int i,j,k,a[100],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
printf("\v");
	for(i=n-1;i>=0;i--)
	{ for(j=0,k=0;j<n ;j++)
	{if(a[i]==a[j] && i!=j)
	k=1;
//printf("%d  ",k);
	}
	if(k==0)
	printf("%d\t",a[i]);
	//printf("\n");
k=0;
	}
}
*/
#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,a[100],n,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&a[i]);
	k=1;
	for(i=1;i<=n;i++)
	{ //for(j=0,k=0;j<n ;j++)
	
	{if(a[k]==a[i] && i!=k)
	c=1;
	}
	
	if(c==0 && i==n)
{
	printf("%d ",a[k]);
k++;
i=0;
}
	if(c==1 && i==n)
	{ 
	c=0;
        k++;
        i=0;
	}
//for(i=1;i<=n;i++)
//printf("%d\t",a[i]);
if(k==n)
exit(0);

	}
}

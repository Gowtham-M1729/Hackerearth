#include<stdio.h>
void main()
{
	int i,j,k,n,l,r,b,d,c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{d=0;
	scanf("%d %d",&l,&r);
	if(l>=r)
	{
	for(j=r;j<=l;j++)
	{b=0;
		for(c=1;c<=j;c++)
		{if(j%c==0)
		b++;
		}
		if(b==2)
		d++;
	}
	printf("%d\n",d);
	}
	else
	{
	for(j=l;j<=r;j++)
	{b=0;
		for(c=1;c<=j;c++)
		{if(j%c==0)
		b++;
		}
		if(b==2)
		d++;
	}
	printf("%d\n",d);
	}
}

}

#include<stdio.h>
void main()
{ static int i,j,k,n,a[100001],b[100001],t;
  scanf("%d",&n);
  j=100000;
  for(i=1;i<=n;i++)
    { scanf("%d",&a[i]);
      b[a[i]]=b[a[i]]+1;
      if(t<a[i])
        t=a[i];
    }
  scanf("%d",&k);
  for(i=1;i<=t;i++)
    { if(b[i]==k)
        { if(j>i)
            j=i;
        }
    }
printf("%d",j);
}

 

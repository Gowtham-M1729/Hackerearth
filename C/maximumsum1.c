#include<stdio.h>
void main()
{ int i,j,k,n,t=0,a[1000],b[1000];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    { scanf("%d",&a[i]);
      b[i]=a[i];
    }
  for (i = 2; i <=n; i++) 
        for (j = 1; j < i; j++) 
            if (a[i] < a[j] && b[i] <b[j] + a[i]) 
                b[i] = b[j] + a[i]; 
    for (i = 1; i <=n; i++) 
        if (t < b[i]) 
            t = b[i];
  printf("%d",t);
  
}


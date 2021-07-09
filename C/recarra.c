int sum(int *a,int n);
#include<stdio.h>
#include<math.h>
int main()
{ int i,j,k,n,a[10];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sum(a,n);
//printf("%d",sum(a,n));
return(0);
}
int sum(int *i,int j)
{ if(j==0)
return(*i);
else
return(printf("%d\t",*i++),sum(i,j-1));
}


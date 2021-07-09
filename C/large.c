#include<stdio.h>
void main()
{ int i,j,k,n,a[10],c,d,p,q,m,l;
printf("enter the value for n");
scanf("%d",&n);
printf("enter the elements to the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the value  for k");
scanf("%d",&k);
c=a[0];
d=1;
p=0;

{ for(j=0;j<n;j++)
      if(a[j]>c)
      { c=a[j];
        d=j;
      }
}
printf("%d\n",a[d]);
for(i=1;i<k;i++)
{
q=a[d];
for(m=0;m<n;m++)
{if(a[d]-a[m]<q && a[m]<a[d])
{ 
  q=a[d]-a[m];
  l=m;
}
printf("%d\t",q);
printf("%d\n",a[l]);
}
d=l;
}
printf("%d",a[l]);
}

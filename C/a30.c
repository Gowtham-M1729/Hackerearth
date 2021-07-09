#include<stdio.h>
void main()
{ int i,j,k,a[20],b[3000],t,n,z;
printf("enter the range of the array");
scanf("%d",&n);
printf("enter the elements to the array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
b[i]=0;
for(i=0;i<n;i++)
   {   for(j=1;j<=a[i];j++)
          {     if(a[i]%j==0)
                 b[i]=b[i]+1;
          }
   }
k=b[0];
for(i=0;i<n;i++)
   {  for(j=0;j<n-i-1;j++)
         if(b[j]>b[j+1])
        {  t=b[j];
           b[j]=b[j+1];
           b[j+1]=t;
            z=a[j];
           a[j]=a[j+1];
           a[j+1]=z;

        }
   }
for(i=0;i<n;i++)
printf("%d\f",a[i]);
}

#include<stdio.h>
void main()
{ int a[20],i,j,t,n;
printf("enter the value for n");
scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);
 for(i=0;i<n;i++)
{   for(j=0;j<n-1;j++)
       { if(a[j]==0)
            {   t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
             }
        }
}
 for(i=0;i<n;i++)
    scanf("%d\t",&a[i]);
}

#include<stdio.h>
void main()
{ int i,j,k,n,a;
scanf("%d",&k);
scanf("%d",&n);
for(i=1;i<=n;i++)
{ scanf("%d %d",&a,&j);
   if(j>=k && a>=k)
    { if(j==a)
       printf("ACCEPTED\n");
      else
       printf("CROP IT\n");
    }
   else
   printf("UPLOAD ANOTHER\n");
}
}
    


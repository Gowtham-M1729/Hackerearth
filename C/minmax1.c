#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j=0,k,n,m,a[100],c,d,t;
  scanf("%d",&n);
  for(i=1,d=0;i<=n;i++)
     { scanf("%d",&a[i]);
       j=j+a[i];
       for(c=i-1,t=0;c>0;c--)
          { if(a[i]==a[c])
              { t=1;
                break;
              }
          }
       if(t==0)
         d++;
       if(i==1)
         { m=a[i];
           k=a[i];
         }
       if(m>=a[i])
         m=a[i];
       if(k<=a[i])
         k=a[i];

     }
printf("%d %d",d,k-m+1);
  if(d==k-m+1)
    printf("YES");
  else
    printf("NO");
 // if((j==((k*(k+1)/2)-(m*(m+1)/2)+1)) && n==(k-m+1))
   // printf("YES");
  //else
    //printf("NO");
}

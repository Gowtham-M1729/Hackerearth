#include<stdio.h>
void main()
{ int i,j,k=0,n,m,t;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%s",a);
         for(j=0,m=0;a[j]!='\0';j++)
            { if(a[j]<=58 && a[j]>=48)
                { k=(int)a[j]-48;
                }
               if(a[j-1]=='+')
                m=m+k;
              if(a[j-1]=='-')
                m=m-k;
              if(j==0)
                m=k;
               //printf("%d ",k);
            }
      
       if(i==1)
       t=m;
       if(m>=t)
         t=m;
      //printf("%d %d\n",t,m);
     }
printf("%d",m);
} 

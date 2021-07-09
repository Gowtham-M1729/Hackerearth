#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       if(k%11==0)
         printf("The streak is broken!");
       else
        { sprintf(a,"%d",k);
          for(j=0;a[j]!='\0';j++)
             { if(a[j]=='2' && a[j+1]=='1')
                 { printf("The streak is broken!");
                   break;
                 }
               if(a[j+1]=='\0')
                 printf("The streak lives still in our heart!");
        }
      }
}

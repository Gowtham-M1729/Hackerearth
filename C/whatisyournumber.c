#include<stdio.h>
void main()
{ int i,j,k,n;
 char a[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
  { scanf("%s",a);
    k=strlen(a);
    if(k!=10 || a[0]=='0')
      printf("no");
    else
     { for(j=0,m=0;j<10;j++)
          { if((int)a[j]<48 || (int)a[j]>57)
              m=1;
          }
        if(m==1)
         printf("no");
        else
         printf("yes");
     }
  }
}
        
        

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{ int i,j,k,n;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%s",a);
       k=strlen(a);
       if(k%2==1)
         {
       for(j=0;j<=(k/2);j++)
          { printf("%d %d\n",(a[j]-96),(a[k-j-1]-96));
            if((a[j]-96)+(a[k-j-1]-96)<=26)
              a[j]=96+(a[j]-96)+(a[k-j-1]-96);
            else
              a[j]=96+((a[j]-96)+(a[k-j-1]-96))%26;
              a[k-1-j]=a[j];
          }
         }
       else
         { for(j=0;j<(k/2);j++)
          { printf("%d %d\n",(a[j]-96),(a[k-j-1]-96));
            if((a[j]-96)+(a[k-j-1]-96)<=26)
              a[j]=96+(a[j]-96)+(a[k-j-1]-96);
            else if((a[j]=='z') && (a[k-j-1]=='z'))
              a[j]='z';
            else
              a[j]=96+((a[j]-96)+(a[k-j-1]-96))%26;
              a[k-1-j]=a[j];
          }
         }
       puts(a);
     }
}

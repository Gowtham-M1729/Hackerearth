#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,c,d,m,b,t;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%s",a);
       m=strlen(a);
       for(d=0,t=0;a[d]!='\0';d++)
          { if(a[d]=='B')
              break;
            if(a[d+1]=='\0')
              t=1;
          }
       if(t==1)
         { printf("%d\n",0);
           t=0;
           continue;
         }
       if(d==0)
         c=0;
       else if(d==1)
         c=1;
       else
         c=2;
       for(k=d,b=0,t=0;a[k]!='\0';k++)
          { if(a[k]=='B')
              { for(j=k+1,t=0;a[j]!='\0';j++)
                   { if(a[j]=='B')
                       { t=1;
                         break;
                       }
                     else
                       b++;
                   }
                if(t==1)
                 {
                 if(j-k==1)
                   c=c;
                 else if(j-k<=4)
                   c=c+j-k-1;
                 else
                   c=c+4;
                   b=0;
                 }
                 k=j-1;
              }
          }
        if(b>2)
          c=c+2;
        else
          c=c+b;
       printf("%d\n",c);
     }
}
    


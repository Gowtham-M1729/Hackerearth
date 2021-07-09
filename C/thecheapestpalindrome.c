#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,c,d,m,b;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%s",a);
       k=strlen(a);
       scanf("%d %d",&m,&d);
       for(j=0,c=0,b=1;j<=k/2;j++)
          { if(a[j]=='/' && a[k-j-1]=='/')
              { if(m>=d)
                  c=c+2*d;
                else
                  c=c+2*m;
              }
                 
            else if((a[j]=='/' && a[k-j-1]=='a') || (a[j]=='a' && a[k-j-1]=='/'))
                 c=c+m;
            else if((a[j]=='/' && a[k-j-1]=='b') || (a[j]=='b' && a[k-j-1]=='/'))
                 c=c+d;
            else if(a[j]!=a[k-j-1])
              { printf("-1\n");
                b=0;
                break;
              }
          }
       if(b==1)
         printf("%d\n",c);
     }
}
           
            
          

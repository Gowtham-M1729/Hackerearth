#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,c;
char a[100];
scanf("%d",&n);
scanf("%s",a);
for(i=0;i<n;i++)
 { if(a[i]=='H')
     for(j=i+1,c=0;j<n;j++)
      {  if(a[j]=='H')
          { if((j-i-1)%2==1)
              { for(k=i+1;k<=j-1;k++)
                   a[k]='B';
                   i=j-1;
                   break;
              }
             else
               {  printf("NO");
                  exit(0);
               }
          }
        else
        { c++;
          if(c==(j-i))
          a[i+1]='B';
        }
      }
 }
printf("YES\n");
puts(a);
}

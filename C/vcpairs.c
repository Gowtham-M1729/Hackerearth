#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,b,c;
  char a[20000];
  scanf("%d",&n);
  for(j=1;j<=n;j++)
    { scanf("%d",&k);
     scanf("%s",a);
    for(i=0,c=0;a[i]!='\0';i++)
      { if(a[i]!='a'|| a[i]!='e' || a[i]!='i' || a[i]!='o'||a[i]!='u' )
          { if(a[i+1]=='a'|| a[i+1]=='e' || a[i+1]=='i' || a[i+1]=='o'||a[i+1]=='u')
              c++;
          }
      }
      
    printf("%d\n",c);
   }
    
  
}


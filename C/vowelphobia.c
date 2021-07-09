#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,b,c;
  char a[20000];
  scanf("%d",&n);
  for(j=1;j<=n;j++)
   {c=0;
     scanf("%s",a);
    for(i=0,c=0;a[i]!='\0';i++)
      { if(a[i]=='a'|| a[i]=='e' || a[i]=='i' || a[i]=='o'||a[i]=='u'  || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
       c++;
      
    
      }
    printf("%d\n",c);
  }
}


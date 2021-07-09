#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,b,x,y,z;
  char a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%s",a);
       k=strlen(a);
        if(k<3)
          printf("NO\n");
       for(j=0,x=0,y=0,z=0,b=0;a[j]!='\0';j++)
          { if(a[j]=='x' && x!=2)
              { x++;
              }
            if(a[j]=='y' && y!=2)
              y++;
            if(a[j]=='z' && z!=2)
              z++;
            if(x+y+z==6)
              { b=1; 
                break;
              }
          }
         if(b==1)
           printf("YES\n");
         else
           printf("NO\n");
       }
}

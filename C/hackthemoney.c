#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void main()
{ int i,j,n,d,c,b;
 char k[100],*p;
scanf("%d",&n);
for(i=1;i<=n;i++)
 {   scanf("%s",k);
     d=strlen(k);
     c=pow(10,d-1);
     b=strtol(k,&p,10);
     if(b==1)
      printf("YES\n");
     else if(b%10!=0)
      printf("NO\n");
     else if((b%(2*c)==0 && k[0]=='2')) 
      { printf("YES\n");
        continue;
      }
     else if(b%(1*c)==0 && k[0]=='1')
      { printf("YES\n");
        continue;
      }
     else
      printf("NO\n");
 }
}

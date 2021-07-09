#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void main()
{ long long int i,j,n,d,c,b,m,p;
 char k[100];
scanf("%lld",&n);
for(i=1;i<=n;i++)
 { p=0;  scanf("%lld",&c);
     sprintf(k,"%lld",c);
     d=strlen(k);
     if(d>2)
     m=pow(2,d-2);
     else
     m=1;
     b=pow(10,d-1);
     if(c==1)
      printf("YES\n");
     else if(c%10!=0)
      printf("NO\n");
     else if((c%(b*d))==0) 
      { for(j=d-2;j>=0;j--)
          {  m=pow(2,d-2);
            if((c%(b*d))==0)
            p++;
          }
       if(p>2)
        printf("YES\n");
        continue;
      }
     else
      printf("NO\n");
 }
}

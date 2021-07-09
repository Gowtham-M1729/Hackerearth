#include<stdio.h>
void main()
{ int i,j,k,n,c,d;
  char a[100];
scanf("%d",&n);
for(j=1;j<=n;j++)
{ c=0; d=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
   { if(a[i]=='S' && a[i+1]=='U' && a[i+2]=='V' && a[i+3]=='O')
       { c++;
             if(a[i+4]=='J' && a[i+5]=='I' && a[i+6]=='T')
               { d++;
                 c--;
               }
             else
               { i=i+3;
               }
       }
      else
       continue;
    }
printf("SUVO=%d",c);
printf("SUVOJIT=%d\n",d);
}
}

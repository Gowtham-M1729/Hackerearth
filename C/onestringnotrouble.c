#include<stdio.h>
void main()
{ static int i,j,k,n,c,b[100],t;
  char a[100];
  scanf("%s",a);
  for(i=0,c=0;a[i]!='\0';i++)
     { if(b[a[i]-96]==0)
         c++;
       b[a[i]-96]++;
     }
  printf("%d\n",c);
 for ( i = 1; i <= 26; i++) 
   { for (j= 1; j <= 26 -i ;j++) 
       {  if (b[j] <b[j + 1])
            {
              t = b[j];
              b[j] = b[j + 1];
              b[j + 1] =t;
            }
       }
   }
 for(i=1;i<=26;i++)
     { printf("%d\n",b[i]);
     }
}

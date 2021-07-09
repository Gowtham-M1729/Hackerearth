#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k=0,n,c;
  char a[1000000];
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
     { for(j=0,c=0;j<i;j++)
          if(a[j]!=a[i])
            c++;
          if(c==j)
           { printf("%c",a[i]);
		     k++;
		     if(k==26)
			 break;
		   }
          else
            continue;
     }
}

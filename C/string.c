#include<stdio.h>
#include<string.h>
void main()
{ static int i,j,k,n,a[200],t;
  char c[100];
  scanf("%d",&n);
  scanf("%s",c);
  for(i=0;c[i]!='\0';i++)
     { j=(int)c[i];
       a[j]=a[j]+1;
      if(a[j]>t)
        { t=a[j];
        }
     }
printf("%d",n-t);
}

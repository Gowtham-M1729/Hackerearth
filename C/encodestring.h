#include<stdio.h>
void main()
{ int i,j,k,n;
  scanf("%s",a);
  k=strlen(a);
  if((a[k-1]-96)%2==0)
    d=1;
  for(i=k-1;i>=0;i--)
     { c=c+((int)a[i]-96);
     }
  if(c%3==0 && d==1)
    printf("Yes");
  else
    printf("No");
}

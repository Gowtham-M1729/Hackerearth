#include<stdio.h>
void main()
{unsigned char a[100];
int i,j,k,n;
scanf("%s",a);
scanf("%d",&k);
for(i=0;i<k;i++)
{ if(a[i]=='9')
  {  
    k++;
   continue;
  }
else
{
a[i]='9';
}
}
puts(a);
}

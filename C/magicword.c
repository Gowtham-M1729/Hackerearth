#include<stdio.h>
#include<stdlib.h>
void main()
{ int i,j,k=1,n,m=0,t=100,b[500],p,c;
 char a[500];
scanf("%d",&n);
for(i=32;i<=122;i++)
 { for(j=2;j<i;j++)
     if(i%j==0) 
    {  m=1;
    }
if(m==0)
 { b[k]=i;
   printf("%d\t",b[k]);
   k++;
 }
m=0;
 }
for(i=1;i<=n;i++)
 { scanf("%d",&p);
   scanf("%s",a);
   for(j=0;j<p;j++)
    {  for(c=1,t=100;c<k;c++)
        {  if(abs((int)a[j]-b[c])<abs(t))
             { t=((int)a[j]-b[c]);
             }
        }
        a[j]=(char)((int)a[j]-(t));
    }
 
puts(a);
}
}
        

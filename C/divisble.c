#include<stdio.h>
void main()
{ int i,j=1,k=0,n,a[100],c[100],d=1;
char b[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
 { scanf("%d",&a[i]);
    if(i<=n/2)
     { sprintf(b,"%d",a[i]);
       c[j]=(int)b[0]-'0';
       j++;
     }
    else
     { c[j]=a[i]%10;
       j++;
     }
  }
for(i=1;i<j;i++)
{ k=k+d*c[i];
  d=d*(-1);
}
if(k%11==0)
printf("OUI");
else
printf("NON");
}



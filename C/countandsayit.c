#include<stdio.h>
void main()
{ int i,j,k,n,c,m,p;
char a[100],b[100];
a[0]=1;
a[1]='\0';
scanf("%d",&n);
for(i=1;i<=n;i++)
{ c=0; 
    for(j=0,k=1;a[j]!='\0';j++)
       { if(a[j+1]==a[j])
         { c++;
           continue;
         }
         else
         { c++;
         }
       printf("%d %d ",c,a[j]);
        b[k]=c;
        k++;
        b[k]=a[j];
        k++;
        c=0;
       }
for(m=1,p=0;m<k;m++,p++)
a[p]=b[m];
a[p]='\0';
printf("\n");
}
}
 

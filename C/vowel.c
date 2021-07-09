#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,d,c,t;
char a[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
{d=0;
	scanf("%s",a);
	c=strlen(a);
	for(k=0;k<c;k++)
	{ t=k;
	      for(j=k;j<=t,a[t]!='\0';j++)
                 { 
if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='q' || a[j]=='u' || a[j]=='A' || a[j]=='E' || a[j]=='I' || a[j]=='O' ||a[j]=='Q'||a[j]=='U')
    
	       d++;
               printf("%c",a[j]);
               if(j==t)
                  {
                     printf("-%d\n",d);
                     t++;
                     j=k-1;
                  }  

                }
         
	}
printf("%d\n",d);
}

}

#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,c,d,p=0,q,m;
char a[100000],b[1000000];
scanf("%d",&n);
for(i=1;i<=n;i++)
{ scanf("%s",a);
scanf("%s",b);
c=strlen(a);
d=strlen(b);
k=(c>d)?c:d;
if(k==c)
q=d;
else
q=c;
p=0;
printf("%d %d",c,d);
for(j=0;j<q;j++)
{ for(m=0;m<k;m++)
 {   if(c>=d)
   {
     if(b[j]==a[m])
      {p++;
      a[m]=' ';
break;}
   }
  else
  {  if(b[m]==a[j])
     {p++;
     b[m]=' ';
break;}
  }
 }
}
printf("%d\n",k+q-2*p);
}
}

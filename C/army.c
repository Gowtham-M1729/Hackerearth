#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void main()
{ int i,j,k,n,d;
char a[30];
scanf("%s",a);
scanf("%d",&k);
d=strlen(a);
//printf("%d\n",d);
for(i=0;i<d;i++)
{ 
	if(a[i]<='z' && a[i]>='a')
	{ //printf("%d\n",(int)a[i]+k);
	if('z'-a[i]>k%26)
	a[i]=a[i]+k%26;
	else
	a[i]='a'+abs(a[i]+k%26-'z');
	}
	else if(a[i]<='Z' && a[i]>='A')
	{
	if('Z'-a[i]>k%26)
	a[i]=a[i]+k%26;
	else
	a[i]='A'+abs(a[i]+k%26-'Z'-1);
	}
	else if(a[i]<='9' && a[i]>='0')
    if('9'-a[i]>k%9)
	a[i]=a[i]+k%9;
	else
	a[i]='0'+1+abs(a[i]+k%9-'9');
	else
	continue;
}
puts(a);
}
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void main()
{ int i,j,k,n,d;
char a[30];
scanf("%s",a);
scanf("%d",&k);
d=strlen(a);
//printf("%d\n",d);
for(i=0;i<d;i++)
{ 
	if(a[i]<='z' && a[i]>='a')
	{ //printf("%d\n",(int)a[i]+k);
	if('z'-a[i]>=k%26)
	a[i]=a[i]+k%26;
	else
	a[i]='a'-1+abs(a[i]+k%26-'z');
	}
	else if(a[i]<='Z' && a[i]>='A')
	{
	if('Z'-a[i]>=k%26)
	a[i]=a[i]+k%26;
	else
	a[i]='A'-1+abs(a[i]+k%26-'Z');
	}
	else if(a[i]<='9' && a[i]>='0')
    if('9'-a[i]>=k%10)
	a[i]=a[i]+k%10;
	else
	a[i]='0'-1+abs(a[i]+k%10-'9');
	else
	continue;
}
puts(a);
}

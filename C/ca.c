#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{ int i,j,k=0,b,d,n,m;
char a[2000];
scanf("%d",&n);
for(m=0;m<=n;m++)
{ k=0;
scanf("%s",a);
b=strlen(a);
printf("%d\n",b);
for(i=0,j=b-1;i<(b/2)+1,j>(b/2)-1;i++,j--)
if(a[i]==a[j])
k++;
for(i=0,j=b-1;i<(b/2)+1,j>(b/2)-1;i++,j--)
printf("%c %c\n",a[i],a[j]);
if(b%2==1)
{
if(k==(b/2)+1)
printf("Palindrome\n");
else
printf("NO\n");
}
else if(b%2==0)
{
if(k==b/2)
printf("Palindrome\n");
else
printf("NO\n");
}
}
}    


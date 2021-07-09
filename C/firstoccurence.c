#include <stdio.h>
 
int main()
{
   int t,i,j,k,a[26]={0},r,l;
   char s[200],c[26];
   scanf("%d",&t);
   for(i=0;i<t;i++)
   {l=0;
       scanf("%s",s);
       j=strlen(s);
       for(k=0;k<j;k++)
       {
           r=s[k]-97;
           if(a[r]==0)
           {
               a[r]++;
               c[l++]=s[k];
           }
       }
       c[l]='\0';
       printf("%s\n",c);
       for(k=0;k<26;k++)
       a[k]=0;
   }
    return 0;
}

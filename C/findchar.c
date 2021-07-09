#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,b,c,x;
  char a[100000];
  scanf("%s",a);
  k=strlen(a);
       for(i=k-1,j=0;i>=0;i--)
          { if(a[i]=='u')
              j++;
            if(j>=114 && k-i-1>=2204)
              break;
          }
        printf("%d %d\n",i,k);
       if(k-i-1==2204)
         printf("%d\n %d",k-j,c);
       for(j=i,b=0,c=0;j<=i+2204 && i>0;j++)
          { if(a[j]=='u')
              c++;
            if(c>=114)
              {
                b=1;
                break;
                
              }
             if(j==i+2204)
               { printf("%d %d\n",k-i,c);
                 i--;
                 j=i-1;
                 c=0;
               }
          }
 if(b==1)
 printf("%d\n %d",k-j,c);
}


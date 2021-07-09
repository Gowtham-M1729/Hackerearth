#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
void main()
{ int i,j,k,n,c,flag=0,b=0;
  char a[30];
printf("enter the string");
scanf("%s",a);
c=strlen(a);
for(i=0;i<c;i++)
if(a[i]=='$')
b++;
if(b==0)
exit(0);
for(i=0;i<c;i++)
{ 
   for(j=0;j<c;j++)
     { 
       if((a[i]=='T' && a[j]=='$') || ( a[i]=='$' && a[j]=='T') )
        {    //flag=0;       
          for(k=i+1;k<=j-1;k++) 
           { 
             if(a[k]=='G')
              { flag=1;
                
              }
           }
        //if(flag==1)
          //printf("quiet\n");
        // if(flag==0)
         //printf("alarm");
        
        }
    
     }
}
if(flag==1)
printf("quiet\n");
if(flag==0)
printf("alarm");
}


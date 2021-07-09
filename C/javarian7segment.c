#include<stdio.h>
#include<string.h>
void main()
{ int i,j,n,c,b,d,t=1000;
char k[100],s[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
 { scanf("%d",&d);
   for(c=1;c<=d;c++)
    { scanf("%s",k);
    for(j=0,b=0;k[j]!='\0';j++)
      { 
         switch(k[j])
         { case '0':
             b=b+6;
             break;

           case '1':
            b=b+2;
            break;

           case '2':
            b=b+5;
            break;
        
           case '3':
            b=b+5;
            break;
         
           case '4':
            b=b+4;
            break;
          
           case '5':
            b=b+5;
            break;
 
           case '6':
            b=b+6;
            break;
    
           case '7':
            b=b+3;
            break;
        
           case '8':
            b=b+7;
            break;
      
           case '9':
            b=b+6;
            break;
         }
    }
  if(b<t)
   { t=b;
     strcpy(s,k);
   }

 }
puts(s);
t=10000000;
}
}

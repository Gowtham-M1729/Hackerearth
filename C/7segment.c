#include<stdio.h>
#include<math.h>
void main()
{ int i,j,n,c,b,d;
char k[100];
scanf("%d",&n);
for(i=1;i<=n;i++)
 { b=0;d=0;
   scanf("%s",k);
    for(j=0;k[j]!='\0';j++)
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
if(b%2==0)
{
/*for(j=1;2*j<=b;j++)
d=d+1*pow(10,j-1);
printf("%d\n",d);
*/
for(j=1;2*j<=b;j++)
printf("%d",1);
printf("\n");
}
else
{ /*d=d+7*pow(10,(b-3)/2);
for(j=1;2*j<=b-3;j++)
d=d+1*pow(10,j-1);
printf("%d\n",d);
*/
printf("7");
for(j=1;2*j<=b-3;j++)
printf("%d",1);
printf("\n");
}
 }
}

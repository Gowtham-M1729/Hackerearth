#include<stdio.h>
void main()
{ int i,j,k,n,t,r,a[20];
scanf("%d",&k);
for(i=0;i<k;i++)
 { scanf("%d",&a[i]);
  
 }
for(i=0;i<k;i++)
 { r=0; 
   for(t=1;t<100 ;t++)
     { r=0;  for(j=2;j<a[i]-t;j++)
            { if((a[i]-t)%j==0)
              { r=1;//printf("%d\t",a[i]-t);
              } 
             // else 
              //continue;
            } 
         if(r==0)
          { printf("%d\n",a[i]-t);
             
           break; 
          } 
       //else 
     // continue;
    }
}
}

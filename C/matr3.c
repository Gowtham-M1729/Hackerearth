#include<stdio.h>
void main()
{ int i,j,k=1,m,n,a[400][400],b[400],c=1,p,q,r,l,t=0,s[200],h;
scanf("%d",&n);
for(i=1;i<=n;i++)
 for(j=1;j<=2;j++)
    scanf("%d",&a[i][j]);
printf("\v");
 for(i=1;i<=n;i++)
 {  for(j=1;j<=2;j++)
     printf("%d\t",a[i][j]);
     printf("\n");
 }


 for(i=1;i<=n;i++)
 {  
    for(j=1;j<=2;j++)
     {  
        b[c]=a[i][j];
        c++;
     }
    q=i;

    for(k=1;k<=n;k++)
     {
        if(b[c-1]==a[i+1][1])
           {  
              b[c]=a[i+1][2];
              c++;
              i++;
           }
     
        else
          {  for(m=i;m<=n;m++)
             {
               if(b[c-1]==a[m][1])
                 {  
                    b[c]=a[m][2];
                    c++;
                    m=i-1;
 break;
                 }
             }
          }
     
      }
 for(q=t;q>=1;q--)
  { 
     if(b[q]==b[t+1])
       for(l=1,m=q;l<=q-1,b[m]!='/';l++,m--)
        printf("%d ",b[l]);
  
    
  }
 

  for(p=t+1;p<c;p++)
   {
      printf("%d ",b[p]);
   }
   printf("\n\n");
  t=c-1;
  b[c]='/';
  c++;
  s[h]=c-1;
    h++;
   /*if(a[i+1][1]==b[2])
    {
       c=2;
    }
   else
   c=1;
//i=q;*/
 }
}

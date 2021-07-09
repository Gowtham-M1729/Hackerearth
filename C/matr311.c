#include<stdio.h>
void main()
{ int i,j,k=1,m,n,a[400][400],b[400],c=1,p,q,r,l,t=0,s[200],h=1;
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

b[0]=-1;
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
 for(q=1;q<=t;q++)
  { 
     if(b[q]==b[t+1])
       { printf("%d\t",b[t+1]);
          for(m=q-1;b[m]!=-1;m--)
          continue;
       printf("%d %d\t",m+1,b[t]);
       for(l=m+1;l<q;l++)
       { printf("%d ",b[l]);
         s[h]=b[l];
         h++;
       }
       s[h]=-1;
       h++;
        break;
       }
   
    
  }
 

  for(p=t+1;p<c;p++)
   {
      printf("%d ",b[p]);
   }
   printf("\n\n");
  b[c]=-1;
  c++;
  t=c-1;

 }
for(m=1;m<h;m++)
printf("%d\t",s[m]);

}

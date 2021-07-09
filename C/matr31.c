#include<stdio.h>
void main()
{ int i,j,k=1,m,n,a[10][10],b[10],c=1,p,q,r,l;
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

               if(b[c-1]==a[m][1])
                 {  
                    b[c]=a[m][2];
                    c++;
                 }
          }
     
      }

  for(p=1;p<c;p++)
   {
      printf("%d ",b[p]);
   }
   printf("\n");
   if(a[i+1][1]==b[2])
    {
       c=2;
    }
   else
   c=1;
//i=q;
 }
}

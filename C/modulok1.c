#include<stdio.h>
void main()
{ int i,j,k=2,n,a[1000],t=100000,m,c,x;
scanf("%d",&n);
 for(i=1;i<=n;i++)
 {  scanf("%d",&a[i]);
    if(a[i]>t)
    t=a[i];
 }

    { c=0;
     
        for(j=2;j<=n;j++)
          {  m=a[1]%k; 
            if(m==a[j]%k)
             { 
               c++;
            if(j+1>n)
             goto x;
               
               continue;
             }
             else
            { c=0;
              k++;
              j=1;
            }
          x:
           if(c==n-1)
            {
            printf("%d ",k);
            c=0;
            k++;
            j=1;
            }
           
         if(k>t/2.0)
         break;
          }
     
    }
}
       


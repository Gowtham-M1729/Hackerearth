#include<stdio.h>
void main()
{ long long int i,j,k,n,a[100000],m;
  scanf("%lld",&n);
  for(i=1;i<=n;i++)
     { scanf("%lld %lld",&k,&m);
       for(j=1;j<=k;j++)
          scanf("%lld",&a[j]);
       m=m-a[1];
       printf("%lld ",m);
       for(j=1;m>=0,j+1<=k;j++)
          {  if(a[j+1]%2==0)
               { if((a[j+1]-(j))>=0)
                   {
                    m=m-(a[j+1]-(j));
                    printf("%lld:%lld ",m,j+1);
                     if(m==0)
                      break;
                   } 
                
               }
             else
               { if((a[j+1]-(j-1))>=0)
                   {
                    m=m-(a[j+1]-(j-1));
                    printf("%lld:%lld ",m,j+1);
                     if(m==0)
                      break;
                   }
               }
          }
     if(j+1==k) 
        printf("Yes %lld\n",m);
      
     else
       printf("No\n");
     }
}
               
       
       


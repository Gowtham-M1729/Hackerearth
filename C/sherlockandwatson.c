#include<stdio.h>
#include<math.h>
void main()
{ long int i,j,k=0,n,d,a[100],m=0,b[100],l,c;
scanf("%ld",&n);
for(i=1;i<=n;i++)
  { scanf("%ld %ld",&k,&m);
    k=pow(2,k)-1;
    m=pow(2,m)-1;
    for(j=2,d=1,l=1;k!=1;)
     { if(k%j==0)
       { 
          if(a[d]!=a[d-1])
              {  a[d]=j;
                 d++;
              }
           k=k/j;
         
         
          continue;
       } 
      else if(j==2)
          { j=j+1;
            
          }
      else
          { j=j+2;
            
          }
     }
   for(j=2,l=1;m!=1;)
     { if( m%j==0)
       {
          if(b[l]!=b[l-1])
              {  b[l]=j;
                 l++;
              }
          m=m/j;
         
          continue;
       } 
      else if(j==2)
          { j=j+1;
            
          }
      else
          { j=j+2;
            
          }
     }
   for(i=1,c=0;i<d;i++)
     {
       for(j=1;j<l;j++)
          { if(a[i]==b[j])
              { c++;
                break;
              }
          }
     }       
      printf("%ld",c);
    printf("\n");
  }


}


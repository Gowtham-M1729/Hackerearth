#include<stdio.h>
void main()
{ int i,j,k,n,c,d,a[100];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
       for(j=1,d=0;j<=7;j++)
          { scanf("%d",&a[j]);
            d=d+a[j];
          }     
  c=k%d;
  if(c==0)
    { for(j=7,d=0;j>=1;j--)
         { if(a[j]!=0)
           break;
         }
    }
  else
    { for(j=1,d=0;j<=7;j++)
        { d=d+a[j];
          if(d>=c)
          break;
        }
    }
  switch(j)
   {
      case 1: 
          printf("MONDAY\n");
          break;
      case 2: 
          printf("TUESDAY\n");
          break;
      case 3: 
          printf("WEDNESDAY\n");
          break;
      case 4: 
          printf("THURSDAY\n");
          break;
      case 5: 
          printf("FRIDAY\n");
          break;
      case 6: 
          printf("SATURDAY\n");
          break;
      case 7: 
          printf("SUNDAY\n");
          break;
      default:
         printf("NO\n");
  }
 }
}

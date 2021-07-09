#include<stdio.h>
#include<math.h>
int progress(int n);
void main()
{  int i,j,k,n;
  scanf("%d",&n);
  progress(n);
}
int progress(n)
{ int i,j;
  if(n%2==1)
    { printf("|-");
      for(i=2;i<=n/5;i=i+2)
     {  printf("--");
     }
     for(j=1;j<=20-i;j=j+2)
       printf("  "); 
       printf(" |");  
    }
  else
  {  printf("|");
  for(i=2;i<=n/5;i=i+2)
     {  printf("--");
     }
  for(j=1;j<=20-i;j=j+2)
    printf("  ");   
     printf("|"); 

  }
    
}

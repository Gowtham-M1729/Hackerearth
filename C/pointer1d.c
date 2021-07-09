#include<stdio.h> 
#include<stdlib.h>
int main() 
{ int i,n,j;
  scanf("%d",&n);
  int *p=malloc(n*(sizeof(int)));;
  int *a = malloc(n*(sizeof(int)));
  printf("True %p-%p %ld\n",p,a,sizeof(*a));
for(i=0;i<n;i++)
   { 
     scanf("%d",(p+i));
     
   }
for(i=0;i<n;i++)
   { 
     scanf("%d",(a+i));
     
   }
while(i>0)
 { if(*p!=*a)
     { printf("Not equal");
       exit(0);
     }
   printf("True %d-%d\n",*p,*a);
   p++;
   a++;
   i--;
 }
 printf("True %d-%p\n",*p+n,p+n);	
 return 0; 
} 


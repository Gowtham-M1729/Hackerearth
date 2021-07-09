#include<stdio.h>
void main()
{ int i,j,k,n;
  char a[100];
 scanf("%d",&n);
 for(i=1;i<=n+1;i++)
   { fgets(a,100,stdin);
     for(j=0;a[j]!='\0';j++)
        { if((int)a[j]<=90 && (int)a[j]>=65)
            printf("%d",(int)a[j]-64);
          else if((int)a[j]>=97 && (int)a[j]<=122)
            printf("%d",(int)a[j]-96);
          else if(a[j]==' ')
            printf("$");
        }
   printf("\n");
   }       
}

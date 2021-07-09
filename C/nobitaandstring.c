#include<stdio.h>
#include<string.h>
void main()
{ int i,j,k,n,d;
  char a[1000];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     {
       fgets(a,100,stdin);
        k=strlen(a);
        if(k==1)
           fgets(a,100,stdin);
        k=strlen(a); 
        a[k-1]='\0';
       for(d=k-1;d>=0;d--)
          {  if(a[d]==' ')
               { for(j=d+1;;j++)
			     { 
                    if(a[j]==' ' || a[j]=='\0')
					  break;
					else
				      printf("%c",a[j]); 

				 }
                  printf(" ");
			   } 
             else if(d==0)
                   { for(j=d;;j++)
			     { 
                    if(a[j]==' ' || a[j]=='\0')
					  break;
					else
				      printf("%c",a[j]); 

				 }
                  printf(" ");
			   } 
           
            
          }
     }
}

#include<stdio.h>
#include<string.h>
void main()
{ static int i,j,k,n,t,c,m,d;
  char a[100000];
   scanf("%s",a);
   scanf("%d",&n);
   for(i=1;i<=n;i++)
      {  int b[100]={0};
        scanf("%d %d",&k,&m);
        for(j=k-1,c=0,t=0;j<=m-1;j++)
           { b[a[j]]++;
             if(b[a[j]]>=c)
              {  c=b[a[j]];
                 if( c>d ||(int)a[j]-48>=t)
                   t=(int)a[j]-48;
                 printf("%d %d\n",t,c);
              }
                d=c;
           }
        printf(">>>%d %d\n",t,c);
        
      }
}

 

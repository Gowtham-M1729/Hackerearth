#include<stdio.h>
void main()
{ int i,j,k,n,m,l,c,t,d=0,p;
  char a[100000],x[3];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d %d",&k,&m,&l);
       scanf("%s",x);
       scanf("%s",a);
       for(j=0,d=0,c=0;j<l;j++)
          { if(a[j]==x[0])
              c++;
          }
            if(c>=m)
              { printf("0\n");
                continue;
              }
       for(j=0,c=0;j<k;j++)
          { if(a[j]==x[0])
              c++;
            if(a[k-j-1]==x[0])
              c++;
            if(2*(j+1)==l)
               break;
          }
          if(c>=m)
            { printf(">>>%d\n",j+1);
              continue;
            }
      for(j=k-1,c=0;j>=k-l;j--)
          { if(a[j]==x[0])
              c++;
            if(c==1)
              p=i;
          }
            if(c>=m)
              { printf("%d\n",k-j);
                continue;
              }
      for(t=j,d=0;j>=0;j--)
         { if(a[j]==x[0])
             c++;
            if(c>=m && p-t==k)
              { printf("%d\n",k-j);
                d=1;
                break;
              }
            if(p-t>l)
              break;
         }
        if(d==0)     
      printf("%d\n",-1);
    }
}


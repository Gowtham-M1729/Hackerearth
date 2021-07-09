#include<stdio.h>
void main()
{ int i,j,k,n,m,l,c,t=0,d=0,p,b;
  char a[100000],x[3];
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d %d %d",&k,&m,&l);
       scanf("%s",x);
       scanf("%s",a);
       for(j=0,t=0,d=0,c=0;j<l;j++)
          { if(a[j]==x[0])
              c++;
          }
            if(c>=m)
              { printf("0\n");
                continue;
              }
       for(j=0;j<l;j++)
          { if(a[l-j-1]==x[0])
              c--;
            if(a[k-j-1]==x[0])
              c++;
            if(c>=m)
            { printf("%d\n",j+1);
              t=1;
            }
          }
       if(t==1)
         continue;
     for(j=k-1,b=1,t=0,c=0;j>0;j--)
          { if(a[j]==x[0])
              c++;
            if(b==1)
              p=i;
            if(k-j+1>l)
              { printf("%d %d %d %d\n",k-j,c,b,b+l); 
                j=k-b;
                b++;
                c=0;
              }
            if(c>=m)
              { printf("%d\n %d",k-j,c);
                t=1;
                break;
              }
          }
      if(t==1)
         continue;
      for(t=j,d=0;t>=0;t--)
         { if(a[t]==x[0])
             c++;
            if(c>=m && p-t==k)
              { printf("%d\n",k-t);
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


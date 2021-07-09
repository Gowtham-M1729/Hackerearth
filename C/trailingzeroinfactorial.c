#include<stdio.h>
#include<math.h>
void main()
{ int i,j,k,n,c,t=0;
  float d;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     { scanf("%d",&k);
        if((log(k/5.0)/(log(5)*1.0)-(int)(log(k/5.0)/(log(5)*1.0)))==0 && k!=1)
          { printf("%d",0);
            continue;
          }
       printf("%d\n",5);
       for(j=4*k; ;j++)
          { if(j>4)
            c=log(j/5.0)/(log(5)*1.0)+1;
            else
            c=1;         
            d=((pow(5,c)-1)*j)/(4.0*pow(5,c));
            if(k>7)
              { d=round(d);
              }
            //j=j+1;
            if((int)d==k)
              { printf("%d: ",j+t);
                printf("%d,",c);
                printf("%d ",(int)d);
                break;
              }
          }
       for(c=1;c<5;c++)
          { printf("%d ",j+c+t);
          }
     }
}
       

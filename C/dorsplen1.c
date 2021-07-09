#include<stdio.h>
#include<stdlib.h>
void main()
{ unsigned long long int i,j,k,n,a[100],t,c=0;
 scanf("%lld %lld %lld",&a[1],&a[2],&a[3]);
if(a[1]==0 && a[2]==0 && a[3]==0)
{
printf("%lld",a[3]+c);
exit(0);
}
 for (i =1; i <= 3; i++)           
       for (j =1;j<3; j++)  
           if (a[j] >= a[j+1]) 
            { t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
            }

 /*  for( ; ; )
  {
   if(abs(a[2]-(a[3]-2))<=1)
    { a[3]=a[3]-2;
      c++;
      break;
      a
    }
    else
    {a[3]=a[3]-2;
      c++;
    }
   }
*/
printf("%lld",a[2]+(a[3]-a[2]+1)/2);

}


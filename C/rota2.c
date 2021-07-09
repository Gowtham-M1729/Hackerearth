#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{
    long int num, a[100000], i,j,k,n,d;
    scanf("%ld", &n);
    for(d=1;d<=n;d++)
      {
	scanf("%ld %ld", &num,&k);
    for(i = 1; i <=num; i++) 
      {
        scanf("%ld", &a[i]);
      }
    for(i = (int)fabs(num-k%num+1); i <=num; i++)
       printf("%ld ", a[i]);
    for(i = 1; i <=(int)fabs(num-k%num); i++)
        printf("%ld ", a[i]);
        printf("\n");
   
      }
       return 0;
}

#include<stdio.h>
#include<stdlib.h>
void swap(int *xp, int *yp);
int main()
{ static int i,j,k,n,a[100000],b[100000],l,r,m;
  scanf("%d %d",&n,&k);
  for(i=1;i<=n;i++)
     { scanf("%d",&a[i]);
     }
  for (i = 1; i <n; i++)
     {         
       for (j = 1; j < n-i+1; j++)  
           if (a[j] > a[j+1]) 
              swap(&a[j], &a[j+1]);
     }
  for(i=1;i<=n;i++)
     printf("%d ",a[i]);

  for(i=1;i<=k;i++)
     { scanf("%d",&j);
       l=1;
       r=n;
       d=0;
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        if (a[m] == j) 
          { printf("YES\n");
            d=1;
            break;
          }
        if (a[m] < j) 
            l = m + 1; 
  
        else
            r = m - 1; 
    } 
   if(d==0)
    printf("NO\n");
     }
    return 0;
  
}
  void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

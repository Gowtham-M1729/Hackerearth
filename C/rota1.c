#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i,j;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for(i=0;i<num;i++)
       for(j=0;j<num-i-1;j++)
          { arr[j]=arr[j]^arr[j+1];
            arr[j+1]=arr[j]^arr[j+1];
            arr[j]=arr[j]^arr[j+1];
          }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}

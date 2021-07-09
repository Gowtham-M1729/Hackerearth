float sum(float n);
#include<stdio.h>
#include<math.h>
int main()
{ int i,j,k,n;
scanf("%d",&n);
sum(n);
printf("%f",sum(n));
return(0);
}
float sum(float i)
{ if(i==1)
return(0);
else
return(log(i)+sum(i-1));
}


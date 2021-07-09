 int sum(int n);
#include<stdio.h>
#include<math.h>
int main()
{ int i,j,k,n;
scanf("%d",&n);
sum(n);
printf("%d",sum(n));
return(0);
}
int sum(int i)
{ if(i==1)
return(1);
else
return(pow(i,i)+sum(i-1));
}


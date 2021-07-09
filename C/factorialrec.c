#include <stdio.h> 
#include<math.h>
#define e 2.71828
#define pi 3.14
  
// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 
  
int main() 
{ 
    int num = 5; 
    printf("Factorial of %d is %d", num, factorial(num));
printf("%f",(sqrt(2*num*pi)*(pow((num/e),num)))); 
    return 0; 
} 

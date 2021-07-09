#include <iostream>
int main()
{
double a=0,b=100,c,d=0.00000000000001;
     while(b-a>=d)
    {    c=(a+b)/2;
         if((a*a-196>0 && c*c-196>0)  || (a*a-196<0 && c*c-196<0))
                       a=c;
         else
             b=c;
         //cout<< a<<" ";
         printf("%lf %lf \n",b,a);
     }
   return 0;
}

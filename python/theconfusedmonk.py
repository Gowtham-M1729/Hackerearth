import math
from functools import reduce
def find_gcd(x, y): 
	while(y): 
		x, y = y, x % y 
	return x
n=int(input())
m=list(map(int,input().split()))
k=reduce((lambda x, y: x * y),m)%1000000007 
num1=m[0] 
num2=m[1] 
gcd=find_gcd(num1,num2) 
for i in range(2,len(m)): 
	gcd=find_gcd(gcd,m[i])
print(gcd,k) 
print(pow(k,gcd,1000000007)) 




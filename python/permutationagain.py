from itertools import combinations 
from itertools import permutations
n=int(input())
for i in range(n):
     m=int(input())
     r=m
     m=list(range(1,m+1))
     k= [m[x:y] for x, y in combinations(range(len(m) + 1), r = 2)] 
     print (list(permutations(m,r))) 
     #s=set(k)
     #print(len(s))
     print(k)
      


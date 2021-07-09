from itertools import combinations 
n=int(input())
for i in range(n):
     m=input()
     k= [m[x:y] for x, y in combinations(range(len(m) + 1), r = 2)] 
     k=set(k)
     print(len(k)) 


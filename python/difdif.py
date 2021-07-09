from itertools import combinations 
m=input()
k= [m[x:y] for x, y in combinations(range(len(m) + 1), r = 2)] 
#k=set(k)
print(k)
print(len(k))

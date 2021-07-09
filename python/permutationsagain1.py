from itertools import combinations 
from itertools import permutations
n=int(input())
a='123456789'
for i in range(n):
    k,m=input().split()
    b=len(k)
    d=len(m)
    c=0
    for j in range(b,d+1):
        l=a[:j]
        s=permutations(l)
        print(s)
        for el in s:
            print(el,c)
            if int(el) <=int(m) and int(el)>=int(k):
                c=c+1
    print(c)





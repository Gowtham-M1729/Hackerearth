import statistics 
from collections import Counter
from statistics import mode 
m=input()
n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    k=list(m[a-1:b+1])
    j=max(sorted(set(k),reverse=True), key =k.count)
    print(j,k.count(j))
    
    #j=set(k)
    #j=sorted(j)
    t=0
    d=0
    #print(j,k)
    #for r in j:
        #l=k.count(r)
        #if l>=t:
         #    if int(r)>d:
         #       t=l
          #      d=int(r)
    #print(t,d)


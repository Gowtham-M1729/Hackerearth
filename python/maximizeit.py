import math
def maxim(j,k):
    c=0
    for d in j:
        c=c+pow(d,2)
    print(c%k)




n,k=map(int, input().split())
j=[]
for i in range(n):
    m=input().split()
    a=list(map(int,m[1:]))
    #print(a)
    j.append(max(a))
maxim(j,k)

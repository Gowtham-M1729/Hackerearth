def stepup(k,l,pr):
    for i in range(k,l+1):
        if pr[i]:
            continue
        else:
            print(i)
n=int(input())
pr=[True]*(1000+1)
pr[1]=False
p=2
while p * p <= 1000:
    if pr[p] == True:
        i = p * 2
        while i <= 1000:
            pr[i] = False
            i += p
    p +=1
for i in range(n):
    k,m=map(int,input().split())
    stepup(k,m,pr) 


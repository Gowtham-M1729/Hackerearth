def sump(k):
    lst=[]
    pr=[True]*(k+1)
    pr[1]=False
    p=2
    while p * p <= k:
        if pr[p] == True:
            i = p * 2
            while i <= k:
                pr[i] = False
                i += p
        p += 1
    for i in range(2,k+1):
        if pr[i]:
            lst.append(i)
    return lst
n=int(input())
k=list(map(int,input().split()))
j=set(sump(max(k)))
l=set(k)
#print(j,l)
m=set.intersection(j,l)
#print(m)
#print(max(m)-min(m))
nums = list(range(2, 100))
for i in range(2, 10):
     k= filter(lambda x: x == i or x % i, nums)
for j in k:
     print(j,end=" ")



n=int(input())
k=list(map(int,input().split()))
d=0
print(k[1:],max(k))
for i in range(n):
    j=max(k[i:])
    c=j-k[i]
    if c>d:
        d=c
print(d)

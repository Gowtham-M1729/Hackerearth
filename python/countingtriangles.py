n=int(input())
m=[]
for i in range(n):
    k=list(input().split())
    k.sort()
    d="".join(k)
    if d in m:
        m.remove(d)
    else:
        m.append(d)
print(m)
print(len(m))

def rep(lst,a,l):
    for i in lst:
        if i.startswith(l):
            a.append(i)
        elif i in a:
            continue
        else:
            return a
def solve(a,l,m):
    for i in m:
        if i.startswith(l):
            a.append(i)
        elif i in a:
            continue
        else:
            return a
n=int(input())
k=list(input().split())
k.sort(reverse=True)
lst=[]
m=[]
a=[]
for i in k:
    if len(set(i))==1:
        lst.append(i)
    else:
        m.append(i)
for i in range(9,0,-1):
    rep(lst,a,str(i))
    solve(a,str(i),m)
print("".join(a))




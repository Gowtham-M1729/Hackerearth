m=input()
k=m[::-1]
m=m.split()
k=k.split()
a=set(k).symmetric_difference(set(m))
if len(a)==len(m)+len(k):
    print(-1)
else:
    for i in k:
        if i not in a:
            print(i)


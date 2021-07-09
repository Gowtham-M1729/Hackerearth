m=input()
m=m.strip()
n=int(input())
d=0
lst=[]
for i in range(n):
    k=input()
    k=k.strip()
    try:
        j=m.index(k)
        lst.append(j)
        l=0
        if m.count(k)>1:
            if k=='bamb':
                l=1
            for b in range(m.count(k)-1+l):
                j=m.find(k,j+1)
                lst.append(j)

        d=1
    except:
        continue
if d==0:
    print(-1)
else:
    #print(lst)
    lst.sort()
    for i in lst:
        print(i,end=" ")

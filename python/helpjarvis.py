n=int(input())
for i in range(n):
    m=input()
    m=sorted(m)
    d=0
    k=list((m))
    for j in range(len(k)-1):
        if int(k[j+1])-int(k[j]) !=1:
            print("NO")
            d=1
            break
        else:
            continue
    if d==0:
        print("YES")
    

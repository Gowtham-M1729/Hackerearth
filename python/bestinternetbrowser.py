n=int(input())
for i in range(n):
    m=input()
    k=m[4:len(m)-3]
    c=0
    for j in ['a','e','i','o','u']:
        c=c+k.count(j)
    print(len(k)-c+3,end="")
    print("/",end="")
    print(len(m))

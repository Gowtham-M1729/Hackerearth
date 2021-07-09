def psum(a,n,k):
    s=set()
    for i in range(n):
        j=k-a[i]
        if j in s:
            print("YES")
            quit()
        else:
            s.add(a[i])
    print("NO")
n=int(input())
k=int(input())
m=input().split()
a=list(map(int,m))
print(m,a,k,n)
psum(a,n,k) 



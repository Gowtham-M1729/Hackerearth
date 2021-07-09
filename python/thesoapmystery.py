from functools import reduce
n=int(input())
m=list(map(int,input().split()))
l=int(input())
for i in range(l):
    k=int(input())
    count = reduce(lambda sum, j: sum + (1 if j<k else 0),m, 0)
    print(str(count))


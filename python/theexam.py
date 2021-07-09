import math
n=int(input())
for i in range(n):
    j,k,m=map(int,input().split())
    l=j
    if j==0 or m==0:
        print(0)
        continue                  
    elif k==0:
        print(j)
        continue
    elif math.log(j,2)+m-1<=math.log(k,2):
        print(0)
        continue
    while True:
        j=j-1
        if j<=10:
            if j*math.pow(2,m-1)<=k:
                print(l-j)
                break
        else:
            if math.log(j,2)+m-1<=math.log(k,2):
                print(l-j)
                break

    



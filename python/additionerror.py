import math
n=int(input())
for i in range(n):
    k=input()
    m=input()
    l=str(min(int(k),int(m)))
    c=0
    for j in range(len(l)):
        if int(m[-(j+1)])+int(k[-(j+1)])>9:
            c=c+pow(10,j+1)
            print(c) 
    print(c)


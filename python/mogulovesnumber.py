k=int(input())
for d in range(k):
    a,b = map(int,(input().split()))
    c=0
    print(a,b)
    if (a == 1):
        c=c+1
        a+=1
        if (b >= 2):
            c=c+1
            a+=1
    if (a == 2):
        c=c+1
    if (a % 2 == 0):
        a+=1
    for i in range(a,b+1,2):
        print("HI")
        flag = 1
        j = 2
        while(j * j <= i):
            if (i % j == 0):
                print("HI")
                flag = 0
                break
                j+=1
        if (flag == 1):
            c=c+1
    print(c)


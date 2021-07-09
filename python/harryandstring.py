n=int(input())
h="aeiou"
for i in range(n):
    m=input()
    k=0
    d=0
    b=0
    t=0
    for j in m:
        if j=='a' or j== 'e' or j=='i' or j=='o' or j=='u':
            if k==0:
                k=h.find(j,k)
                t=k
                continue
            k=h.find(j,k)
            print(k,t)
            if b==1 and d==1:
                print('Bad')
                break
            elif k-t>=0:                 #discount weak lgzkbqxpavundjxymzavfrzblgmo
                d=1
                t=k
                continue
            elif k-t<0:
                b=1
                t=k
                continue
            
    if b==1 and d==0:
        print("Worst")
    elif d==1 and b==0:
        print("Good")
                 




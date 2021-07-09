def conse(k):
    if len(k)==1:
        return 1
    for i in k:
        if len(i)==4:
            continue
        else:
            return 0
    return 1
def samed(j):
    for d in range(len(j)-4):
        if len(set(j[d:d+4]))==1:
            print("inf",len(set(j[d:d+5])),j[d:d+5])
            return 0
    return 1
n=int(input())
for i in range(n):
    m=input()
    k=m.split('-')
    print(k)
    j="".join(k)
    print(j)
    if len(j)==16:
        if conse(k)==1:
            print("pas")
            if j.isdigit():
                print("pas")
                if j[0]=='6' or j[0]=='4' or j[0]=='5':
                    print("pas")
                    if samed(j)==1:
                        print("pas")
                        print("Valid")
                    else:
                        print("Invalid")
                else:
                    print("Invalid")
            else:
                 print("Invalid")
        else:
            print("Invalid")
    else:
        print("Invalid")



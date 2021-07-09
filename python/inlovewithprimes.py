def SieveOfEratosthenes(k, pr):
    pr[1]=False
    p=2
    while p * p <= k:
        if pr[p] == True:
            i = p * 2
            while i <= k:
                pr[i] = False
                i += p
        p += 1
def PrimePair(n):
    d=0
    pr=[True]*(n+1)
    SieveOfEratosthenes(n,pr)
    print(pr)
    for i in range(2, n):
        if (pr[i] and pr[n - i]):
            print("Deeps")
            d=1
            break
    if d==0:
       print("Arjit")
n=int(input())
for i in range(n):
    PrimePair(int(input())) 


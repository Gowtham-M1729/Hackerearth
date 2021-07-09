from collections import Counter
def primes(n):
    primfac = []
    d = 2
    while d*d <= n:
        while (n % d) == 0:
            primfac.append(d)  # supposing you want multiple factors repeated
            n //= d
        d += 1
    if n > 1:
       primfac.append(n)
    return primfac
    
for _ in range(int(input())):
    n=int(input())
    if(n>=2):
        c=Counter(primes(n))
        print(c)
        ans=1
        for i in c:
            if(i!=2):
                x=c[i]+1
                ans*=(i**x -1 )/(i-1)
        print(int(ans))
    else:
        print(1)

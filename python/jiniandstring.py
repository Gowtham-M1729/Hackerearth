m=input()
k=int(input())
b=set(m)
print(oct(k))
if len(b)<k:
    print(-1)
    quit()
s=set()
c=0
for i in m:
    if m.count(i)==1 and i.isalpha:
        c=c+1
        #m.replace(i,'$')
        if c==k:
            print(i)
            quit()
    elif i.isalpha:
        s.add(i)
        if len(s)==len(b):
            print(-1)
            quit()
print(-1)


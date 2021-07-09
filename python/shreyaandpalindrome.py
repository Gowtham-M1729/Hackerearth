m=input()
k=set(m)
k.discard('\r')
print(k)
if len(k)==1:
    print(1)
    quit()
elif m==m[::-1]:
        print(len(m)-1)
        quit()
else:
    print(len(m))
k=int(m)
print(k)

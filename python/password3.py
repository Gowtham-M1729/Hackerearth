n =int(input())
dic = dict()
m=list()
for i in range(n):
        a=input()
        m.append(a)
print(m)
for j in m:
    if j[::-1] in m:
        print(j)
        print(len(j),end=" ")
        print(j[int(len(j)/2)])
        quit()

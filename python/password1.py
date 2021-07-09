n =int(input())
dic = dict()
m=list()
for i in range(n):
        a=input()
        m.append(a)
for j in m:
    dic[j] = dic.get(j,0)+1
    dic[j[::-1]] = dic.get(j[::-1],0)+1
    if dic[j]==2:
        print(j)
        print(len(j),end=" ")
        print(j[int(len(j)/2)])
        quit()
    if dic[j[::-1]]==2:
        print(j)
        print(len(j),end=" ")
        print(a=j[int(len(j)/2)])
        quit()
       


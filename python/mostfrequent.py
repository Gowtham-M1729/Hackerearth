n = input()
k = input().split()
a = list(map(int,k))
dic = dict()
lst=list()
for i in a:
    dic[i] = dic.get(i,0)+1
print(dic)
m=max(dic,key=lambda j:dic[j])
print(m)

fname = input("Enter file name: ")
fh = open(fname,'r')
d=fh
lst = list()
m=list()
for k in fh:
    m=k.split()
    for i in m:
        if i not in lst:
            lst.append(i)
lst.sort()
print(lst)  



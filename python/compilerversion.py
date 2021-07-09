lst=list()
ls=list()
while True:
    try:
        line = input()
        if " " in line:
            d=1
    except EOFError:
        break
    lst.append(line)
c=-1
for i in lst:
    c=c+1
    k=i.find('//')
    j=i.find('->')
    if '->' in i and '//' in i:
        while j<k and j!=-1:
            i=i.replace('->','.',1)
            j=i.find('->',j+1)
            k=k-1  
    else:
        i=i.replace('->','.')
    ls.append(i)
for b in ls:
    print(b)


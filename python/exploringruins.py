m=input()
if len(m)==1:
    if m[0]=='?':
        print('a')
        quit()
    else:
        print(m)
        quit()
k=m.count('?')
d=0
if m[0]=='?':
    if m[1]=='a':
        m=m.replace("?",'b',1)
    else:
        m=m.replace("?","a",1)
for i in range(k):
    j=m.find('?',d)
    if j==len(m):
        if m[j-1]!='a':
            m= m.replace('?','b',1)
            break
        else:
            m= m.replace('?','a',1)
            break
    if m[j-1]!='a' and m[j+1]!='a':
       m= m.replace('?','a',1)
    else:
        m=m.replace('?','b',1)
    d=j


print(m)

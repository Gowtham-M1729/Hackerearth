import math
s=input()
m=[]
k=s.split(" ")
print(k)
for i in k:
    try:
       if i[0].isalpha():
           m.append(i.title())
       else:
           m.append(i)
    except:
          m.append(" ")
          continue
print(m)
print(" ".join(m))




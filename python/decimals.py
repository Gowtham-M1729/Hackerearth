import math
m=input()
lst=[]
def truncate(f, n):
    return math.floor(f * 10 ** n) / 10 ** n
def decimal(j,lst):
    if j=='0':
       lst.append('0'*6)
       return lst
    else:
       for i in range(6):
            k=str(j)+'0'
            lst.append(str(int(k)//7))
            j=int(k)%7
            #print(lst)
            i=i+1
            #print(j)
    return lst
if len(m)<9:
    k=int(m)
    l=k/7
    b=truncate(l,6)
    #print('%.f'%l)
    print(b)
    quit()
else:
    j=m[0]
    i=0
    if int(j)<7:
            k=m[i]+m[i+1]
            i=i+1
    else:
        k=j
    while i<len(m):
        if j=='0':
            k=m[i]
            if int(k)<7 and i+1<len(m):
                  k=m[i]+m[i+1]
                  lst.append('0')
                  i=i+1
        #elif i>1:
         #   k=j
          #  i=i+1
            #print(k,'*')
        if int(k)%7==0:
            lst.append(str(int(k)//7))
            #print(lst)
            i=i+1
            j='0'
        else:
            lst.append(str(int(k)//7))
            j=int(k)%7
            #print(lst)
            if i+1<len(m):
               j=(str(j)+m[i+1])
            k=j
            i=i+1
            #print(j)
lst.append(".")
l=decimal(j,lst)
print("".join(l))

        

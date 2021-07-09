n=int(input())
h="aeiou"
for i in range(n):
    m=input()
    k=0
    d=0
    b=0
    t=0
    count={'p':0,'n':0}
    for j in m:
        if j=='a' or j== 'e' or j=='i' or j=='o' or j=='u':  #lccpsskdlos
            if k==0 and b==0:
                k=h.find(j,k)
                t=k
                b=b+1
                continue
            k=h.find(j,t)
            t=h.find(j)
            #print(k,t)
            if k==-1:
                k=-1
                if count['p']>0:
                    print("Bad")     
                    d=1
                    break
                else:
                    count['n']=count['n']+1
            else:
                if count['n']>0:
                    print("Bad")
                    d=1
                    break
                else:
                    count['p']=count['p']+1
    #print(count)
    if d!=1:
       if count['p']==0 and count['n']>0:
           print("Worst")
       elif count['p']>0 and count['n']==0:
           print("Good")
       elif count['p']==0 and count['n']==0:
           print("Good")
       else:
           print("Bad")
                 




n =int(input())
dic = dict()
for i in range(n):
        a=input()
        dic[a] = dic.get(a,0)+1
        if a==a[::-1]:
            if dic[a]==2:
                print(len(a),end=" ")
                print(a[int(len(a)/2)])
                quit()
            else:
                continue
        dic[a[::-1]] = dic.get(a[::-1],0)+1
        if dic[a]==2:
            print(len(a),end=" ")
            print(a[int(len(a)/2)])
            quit()
        if dic[a[::-1]==2:
            print(len(a),end=" ")
            print(a[int(len(a)/2)])
            quit()
        print(dic[a])
       


def sump(k,m):
	pr=[True]*(m+1)
	pr[1]=False
	p=2
	while p * p <= m: 
		if pr[p] == True: 
			i = p * 2
			while i <= m: 
				pr[i] = False
				i += p 
		p += 1
		for i in range(k,m+1):
			if pr[i]:
				print(i,end=" ")
k,m=map(int,input().split())
sump(k,m)


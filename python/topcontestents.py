def Find_K (K, Score, N):
    m=[0]+Score
    l=sorted(range(len(m)),key=lambda s:m[s],reverse=True)[:N]
    return l
N,K = map(int,input().split())
Score = list(map(int, input().split()))
 
out_ = Find_K(K, Score, N)
print (' '.join(map(str, out_)))



    

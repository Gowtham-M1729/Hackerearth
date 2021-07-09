from itertools import permutations
m=input()
k=permutations(m)
for i in k:
    print("".join(i),end=" ")

for i in range(0, 16):
    for j in range(4):
        k = (1 << j)
        print(bin(i).replace("0b", ""), end=" & ")
        print(bin(k).replace("0b", ""), end="==")
        print(i & k)
        print()

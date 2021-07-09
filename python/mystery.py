while True:
    try:
        k= int(input())
    except EOFError:
        break
    if k%2==1:
        print(1)
        continue
    else:
        j=bin(k)
        print(2**(j[::-1].index('1')))


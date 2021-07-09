def sol(k)
    if(k<9):
        return k;
    else:
        return k%9+10*fun(k//9) 
while True:
    try:
        i =int(input())
        print(sol(i))
    except EOFError:
        break

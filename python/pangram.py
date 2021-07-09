def ispangram(str): 
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    for char in alphabet: 
        if char not in str.lower(): 
            return False

    return True
    
# Driver code 
#s =list(input().split())
s=input()
print(s)
if(ispangram(s) == True): 
    print("pangram") 
else: 
    print("not pangram") 


fname = input("Enter file name: ")
fh = open(fname,'r')
d=fh
for line in d: 
    print(line.title())
for k in fh: 
    print(k.upper())


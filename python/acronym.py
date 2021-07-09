stopwords = ['to', 'a', 'for', 'by', 'an', 'am', 'the', 'so', 'it', 'and', "The"]
org = "The organization for health, safety, and education"
lst=org.split()
a=[]
for i in lst:
    if i not in stopwords:
        a.append(i[0])
m=("".join(a))
acr=m.upper()
stopwords = ['to', 'a', 'for', 'by', 'an', 'am', 'the', 'so', 'it', 'and', 'The']
sent = "The water earth and air are vital"
lst=sent.split()
acro=""
a=[]
for i in lst:
    if i not in stopwords:
        a.append(i[:2].rstrip())
acro=(".".join(a)).upper()
print(acro)
inventory = ["shoes, 12, 29.99", "shirts, 20, 9.99", "sweatpants, 25, 15.00", "scarves, 13, 7.75"]
for i in inventory:
    j=i.split(',')
    print(j)
    





  

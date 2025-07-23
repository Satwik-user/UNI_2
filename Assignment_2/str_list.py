n=int(input("Enter size of list:"))
l=[]
for i in range(n):
    l.append(input("Enter string element:"))
for i in l:
    if len(i)==0:
        del l[i]
print()
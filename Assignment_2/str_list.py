n=int(input("Enter size of list:"))
l=[]
for i in range(n):
    l.append(input("Enter string element:"))
l=[string for string in l if len(string)>0]
print("Modified List:",l)
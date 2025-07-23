n=int(input("Enter size of list:"))
l=[]
for i in range(n):
    l.append(int(input("Enter element:")))
l.reverse()
print("Reverse of the list:",l)
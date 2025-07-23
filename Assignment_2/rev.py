n=int(input("Enter size of list:"))
l=[]
for i in range(n):
    l.append(int(input("Enter element:")))
print("Original List:")
l.reverse()
print("Reverse of the list:",l)
n=int(input("Enter size of list:"))
l=[]
for i in range(n):
    l.append(int(input("Enter element:")))
print("Original List:",l)
index=int(input("Enter index to add new element:"))
new_ele=int(input("Enter element to be inserted:"))
l.insert(index,new_ele)
print("Modified List:",l)
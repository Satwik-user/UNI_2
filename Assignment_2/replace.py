n=int(input("Enter size of list:"))
l=[]
for i in range(n):
    l.append(int(input("Enter element:")))
old_ele=int(input("Enter value to be replaced:"))
new_ele=int(input("Enter new value:"))
for i in range(n):
    if l[i]==old_ele:
        l[i]=new_ele
        
n1=int(input("Enter size of nested list:"))
n2=int(input("Enter size of sub list:"))
l1=[]
for i in range(n1):
    l2=[]
    for j in range(n2):
        l2.append(int(input("Enter element:")))
    l1.append(l2)
l3=[]
for i in range(n2):
    
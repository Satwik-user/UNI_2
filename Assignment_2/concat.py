n1=int(input("Enter size of list1:"))
l1=[]
for i in range(n1):
    l1.append(int(input("Enter element of list1:")))
n2=int(input("Enter size of list2:"))
l2=[]
for i in range(n2):
    l2.append(int(input("Enter element of list2:")))

concat=[]
for i in range(min(n1,n2)):
    concat.
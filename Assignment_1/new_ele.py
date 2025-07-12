n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
ele=int(input("Enter new element:"))
pos=int(input("Enter positioni of element:"))
arr[pos]=ele
print("Modified array:",end=' ')
for i in range(n):
    print(arr[i])
n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
ele=int(input("Enter new element:"))
pos=int(input("Enter position of element:"))
arr.insert(pos, ele)
print("Modified array:",end=' ')
for i in range(ln):
    print(arr[i],end=' ')
print()
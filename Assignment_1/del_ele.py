n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
pos=int(input("Enter position of element to be deleted:"))
del(arr[pos])
print("Modified array:",end)
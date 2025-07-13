n=int(input("Enter size of array:"))
arr=[]
res=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
for item in arr:
    if item not in res:
        res.append(item)
print("Modified array:",end='')
for i in range(n):
    print(arr[i],end=' ')
print()
n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
print("Array")
for item in arr:
    print(item,end=' ')
print()
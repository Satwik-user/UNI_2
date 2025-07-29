n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
max=arr[0]
min=arr[0]
for item in arr:
    if item>max:
        max=item
    if item<min:
        min=item
print("Maximum element in array:",max)
print("Minimum element in array:",min)
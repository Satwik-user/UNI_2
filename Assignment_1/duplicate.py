n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
for i in range(n):
    for j in range(i+1,n):
        if arr[i]==arr[j]:
            del(arr[j])
            n-=1
            j
print("Modified array:",end='')
for i in range(n):
    print(arr[i],end=' ')
print()
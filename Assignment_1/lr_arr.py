n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
k=int(input("Enter value of k:"))
l_arr=arr[:]
r_arr=arr[:]
for _ in range(k):
    l_arr=l_arr[1:]+[l_arr[0]]
    k-=1
for _ in range(k):
    r_arr=[r_arr[-1]]+r_arr[:-1]
    cpy_k-=1
print("Left rotation array:",l_arr)
print("Right rotation array:",r_arr)
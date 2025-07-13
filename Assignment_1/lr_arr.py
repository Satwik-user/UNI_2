n=int(input("Enter size of array:"))
arr=[]
for i in range(n):
    arr.append(int(input("Enter element:")))
k=int(input("Enter value of k:"))
cpy_k=k
l_arr=arr[:]
r_arr=arr[:]
while k>0:
    l_arr=l_arr[1:]+l_arr[0]
    k-=1
while cpy_k>0:
    r_arr=r_arr[n-1]+r_arr[0:n-2]
    cpy_k-=1
print("Left rotation array:",l_arr)
print("Right rotation array:",r_arr)
m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
arr=[]
for i in range(m):
    a=[]
    for j in range(n):
        a.append(int(input("Enter element:")))
    arr.append(a)

print("Original Matrix:")
for i in arr:
    print(i)

r1,r2=int(input("Enter row to interchange:")).split(' ')
for i in range(n):
    arr[r1][i],arr[r2][i]=arr[r2][i],arr[r1][i]
    
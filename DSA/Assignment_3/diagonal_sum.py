m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
arr=[]
sum=0
for i in range(m):
    for j in range(n):
        arrint(input("Enter element:"))

for i in range(m):
    for j in range(n):
        if i==j:
            sum+=arr[i][j]

print("Sum of diagonal elements:",sum)
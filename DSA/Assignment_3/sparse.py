m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
arr=[]
for i in range(m):
    a=[]
    for j in range(n):
        a.append(int(input("Enter element:")))
    arr.append(a)

c=0
for i in range(m):
    for j in range(n):
        if arr[i][j]==0:
            c+=1

if c>m*n/2:
    print("Sprase Matrix")
else:
    print()
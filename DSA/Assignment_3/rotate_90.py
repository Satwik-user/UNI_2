m=int(input("Enter row size:"))
n=int(input("Enter column size:"))
arr=[]
rot=[]
for i in range(m):
    a=[]
    for j in range(n):
        a.append(int(input("Enter element:")))
    arr.append(a)

rot=[[0 for _ in range(n)]for _ in range(m)]
for i in range(m):
    for j in range(n):
        rot[j][n-i-1]=arr[i][j]

print("Rotated Matrix:")
for i in rot:
    
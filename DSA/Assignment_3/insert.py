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

ele=int(input("Enter element to be inserted:"))
pos_row=int(input("Enter row of new"))
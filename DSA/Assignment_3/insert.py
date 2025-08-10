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
pos_row=int(input("Enter row position:"))
pos_col=int(input("Enter column position:"))

if pos_row<0 or pos_row>m or pos_col<0 or pos_col>n:
    print("Invalid position for insertion!")
else:
    mod_arr
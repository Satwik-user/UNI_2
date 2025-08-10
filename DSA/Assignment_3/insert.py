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
    mod_arr=[]
    for i in range(m+1):
        if i==pos_row:
            new_row=[]
            for j in range(n+1):
                if j==pos_col:
                    new_row.append(ele)
                elif j<pos_col:
                    new_row.append(arr[i][j])
                else:
                    new_row.append(arr[i][j-1])
            mod_arr.append(new_row)
        elif i<pos_row:
            mod_arr.append(arr[i])
        else:
            mod_arr.append(arr[i-1])

    print("Modified Matrix:")
    for i in arr:
        print()
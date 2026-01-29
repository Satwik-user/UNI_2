row = int(input("Enter number of rows:"))
col = int(input("Enter number of columns:"))

search_ele = int(input("Enter search element:"))

arr = []
for i in range(row):
    row = []
    for j in range(col):
        row.append(int(input("Enter element:")))
    arr.append(row)


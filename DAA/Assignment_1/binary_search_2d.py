row = int(input("Enter number of rows:"))
col = int(input("Enter number of columns:"))

search_ele = int(input("Enter search element:"))

print("Enter sorted elements")
arr = []
for i in range(row):
    row = []
    for j in range(col):
        row.append(int(input("Enter element:")))
    arr.append(row)

left = 0
right = row*col-1
f = 0
while left <= right:
    mid = left + (right - left) / 2
    r = mid / col
    c = mid % col
    cur = arr[r][col]

    if cur == search_ele:
        f = 1
        break
    elif cur < search_ele:
        left = mid + 1
    else:
        
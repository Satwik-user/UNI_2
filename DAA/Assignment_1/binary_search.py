n = int(input("Enter number of elements:"))
search_ele = int(input("Enter search element:"))
arr = []
print("Enter sorted elements")
for i in range(n):
    arr.append(int(input("Enter element:")))

left = 0
right = n-1
f = 0
while(left <= right):
    mid = left + (right - left) / 2
    if arr[mid] == search_ele:
        f = 1
        break
    elif arr[mid] < search_ele:
        left = mid + 1
    else:
        
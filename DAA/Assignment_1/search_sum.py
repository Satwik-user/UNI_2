n = int(input("Enter number of elements:"))
arr = []
print("Enter elements in sorted order")
for i in range(n):
    arr.append(int(input("Enter element:")))

X = int(input("Enter search sum number:"))

left = 0, right = n-1, f = 1
while left < right:
    sum = arr[left] + arr[right]
    if sum == X:
        f = 1
        break
    elif sum < X:
        left
n = int(input("Enter number of elements:"))
X = int(input("Enter search sum number:"))
arr = []
print("Enter elements in sorted order")
for i in range(n):
    arr.append(int(input("Enter element:")))

left = 0
right = n-1
f = 0
while left < right:
    sum = arr[left] + arr[right]
    if sum == X:
        f = 1
        break
    elif sum < X:
        left += 1
    else:
        right -= 1

if f == 1:
    print(f"{arr[left]} and {arr[right]} sums up to {X}")
else:
    print("Sum not found!")
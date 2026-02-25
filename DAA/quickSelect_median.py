def partition(arr, l, r):
    pivot = arr[l]
    i = l + 1
    j = r
    
    while i < j:
        while i <= r and arr[i] < pivot:
            i += 1
        
        while j >= l and arr[j] > pivot:
            j -= 1
        
        if i < j:
            swap(arr, i, j)
    
    arr[l]
    return j

def quick_select(arr, l, r, k):
    if l <= r:
        pivot = partition(arr, l, r)
        if pivot == k:
            return pivot
        elif pivot < k:
            return quick_select(arr, pivot + 1, r, k)
        else:
            return quick_select(arr, l, pivot - 1, k)
    return -1

def main():
    n = int(input("Enter size of array: "))
    
    arr = []
    for i in range(n):
        arr.append(int(input("Enter element: ")))
    
    mid = n // 2
    
    median = quick_select(arr, 0, n - 1, mid)
    left_n = quick_select(arr, 0, n - 1, mid - 1)
    right_n = quick_select(arr, 0, n - 1, mid + 1)
    
    print("Median element:", arr[median])
    if median - 1 >= 0:
        print("Left Neighbour:", arr[left_n])
    if median + 1 < n:
        print("Right Neighbour:", arr[right_n])

if __name__ == "__main__":
    main()
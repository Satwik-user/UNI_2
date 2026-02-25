def merge(L, R, n):
    arr = []
    i = 0
    j = 0
    k = 0
    while i < n and j < n:
        if L[i] < R[j]:
            arr.append(L[i])
            k += 1
            i += 1
        else:
            arr.append(R[j])
            k += 1
            j += 1
        
    return arr

def median(arr, n):
    if n % 2 == 0:
        m = (n + 1) / 2
    else:
        m = n / 2

    return m

def main():
    n = int(input("Enter size of both arrays:"))

    L = []
    R = []
    for i in range(n):
        L.append(int(input("Enter element of array 1:")))
    print()
    for i in range(n):
        R.append(int(input("Enter element of array 2:")))
    print()

    arr = merge(L, R, n)

    print("Median of sorted arrays:", median(arr, n))

if __name__ == "__main__":
    main()
def bucketSort(arr, n):
    bucket = [0] * n

    for i in range(n):
        bucket[arr[i]] += 1

    index = 0
    for i in range(n):
        for j in range(bucket[i]):
            arr[index] = i
            index += 1

def main():
    n = int(input("Enetr array size:"))

    arr = []
    for i in range(n):
        arr.append(int(input("Enter element:")))

    print("Original:", end = ' ')
    for i in range(n):
        print(arr[i], end = ' ')
    print()

    max = arr[0]
    for i in range(n):
        if arr[i] > max:
            max = arr[i]

    bucketSort(arr, max)

    print("Sorted:", end = ' ')
    for i in range(n):
        print(arr[i], end = ' ')
    print()

if __name__=="__main__":
    main()
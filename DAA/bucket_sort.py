def bucketSort(arr, n):
    bucket = [0] * n

    for i in range(n):
        bucket[arr[i]] += 1
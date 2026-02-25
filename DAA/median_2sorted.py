def merge(L, R, n):
    arr = []
    i = 0
    j = 0
    k = 0
    while i < n and j < n:
        if L[i] < R[j]:
            arr[k] = L[i]
            k += 1
            i += 1
        else:
            arr[k] = R[j]
            
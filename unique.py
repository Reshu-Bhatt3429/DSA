def all_unique():
    arr = [1, 2, 3, 4, 5]
    for i in range(len(arr)):
        for j in range(i + 1, len(arr)):
            if arr[i] == arr[j]:
                return False
    return True
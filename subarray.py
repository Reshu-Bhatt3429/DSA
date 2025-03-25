def count_subarrays_with_sum(arr, target):
    n = len(arr)
    count = 0
    for i in range(n):
        current_sum = 0
        for j in range(i, n):
            current_sum += arr[j]
            if current_sum == target:
                count += 1
    return count
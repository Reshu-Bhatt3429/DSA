def longest_consecutive_sequence(arr):
    n = len(arr)
    max_length = 0
    for i in range(n):
        current_num = arr[i]
        current_length = 1
        while current_num + 1 in arr:
            current_num += 1
            current_length += 1
        max_length = max(max_length, current_length)
    return max_length
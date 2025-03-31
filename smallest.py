def smallest_number():
    arr = [7, 3, 9, 2, 5]
    min_num = arr[0]
    for num in arr:
        if num < min_num:
            min_num = num
    return min_num
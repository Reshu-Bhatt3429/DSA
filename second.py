def second_largest():
    arr = [10, 20, 30, 40, 50]
    first, second = float('-inf'), float('-inf')
    for num in arr:
        if num > first:
            second = first
            first = num
        elif num > second:
            second = num
    return second

def sum_of_evens():
    arr = [1, 2, 3, 4, 5, 6]
    total = 0
    for num in arr:
        if num % 2 == 0:
            total += num
    return total
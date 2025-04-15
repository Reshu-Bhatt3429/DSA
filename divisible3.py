def count_even_divisible_by_3():
    arr = [6, 9, 12, 15, 18]
    count = 0
    for num in arr:
        if num % 2 == 0 and num % 3 == 0:
            count += 1
    return count
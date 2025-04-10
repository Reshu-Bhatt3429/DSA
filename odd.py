def count_odds():
    arr = [1, 2, 3, 4, 5]
    count = 0
    for num in arr:
        if num % 2 != 0:
            count += 1
    return count
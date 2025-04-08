def all_even():
    arr = [2, 4, 6, 8]
    for num in arr:
        if num % 2 != 0:
            return False
    return True
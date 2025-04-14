def has_negative():
    arr = [1, 2, -3, 4, 5]
    for num in arr:
        if num < 0:
            return True
    return False
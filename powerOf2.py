def is_power_of_two():
    num = 16
    if num <= 0:
        return False
    while num > 1:
        if num % 2 != 0:
            return False
        num //= 2
    return True

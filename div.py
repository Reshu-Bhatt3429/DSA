def is_divisible_by_its_digits():
    num = 12
    for digit in str(num):
        if int(digit) == 0 or num % int(digit) != 0:
            return False
    return True
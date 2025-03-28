def sum_of_digits():
    num = 12345
    total = 0
    for digit in str(num):
        total += int(digit)
    return total
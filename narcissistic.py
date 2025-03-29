def is_narcissistic(num):
    digits = str(num)
    num_digits = len(digits)
    total = sum(int(digit) ** num_digits for digit in digits)
    return total == num

def find_narcissistic_numbers(limit):
    result = []
    for i in range(1, limit + 1):
        if is_narcissistic(i):
            result.append(i)
    return result

# Example usage
print(find_narcissistic_numbers(1000))
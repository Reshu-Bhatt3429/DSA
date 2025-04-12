#Find the total number of digits in a list of strings
def count_digits_in_strings():
    arr = ["abc123", "456", "test7"]
    count = 0
    for s in arr:
        for char in s:
            if char.isdigit():
                count += 1
    return count
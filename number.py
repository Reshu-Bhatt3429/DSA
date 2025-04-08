def count_neither_letters_nor_digits():
    s = "hello@123!"
    count = 0
    for char in s:
        if not char.isalnum():
            count += 1
    return count
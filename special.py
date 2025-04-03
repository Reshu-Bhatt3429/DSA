def count_special_chars():
    s = "hello@world!#"
    count = 0
    for char in s:
        if not char.isalnum() and not char.isspace():
            count += 1
    return count
def is_only_special_chars():
    s = "@#$!"
    for char in s:
        if char.isalnum() or char.isspace():
            return False
    return True
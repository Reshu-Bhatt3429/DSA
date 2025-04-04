def is_all_uppercase():
    s = "HELLO"
    for char in s:
        if not char.isupper():
            return False
    return True
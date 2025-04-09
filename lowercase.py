def is_all_lowercase():
    s = "hello"
    for char in s:
        if not char.islower():
            return False
    return True
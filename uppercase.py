#Check if a string contains at least one uppercase letter
def has_uppercase():
    s = "helloWorld"
    for char in s:
        if char.isupper():
            return True
    return False

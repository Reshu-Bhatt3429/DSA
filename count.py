def count_consonants():
    s = "hello"
    vowels = "aeiou"
    count = 0
    for char in s:
        if char.isalpha() and char.lower() not in vowels:
            count += 1
    return count
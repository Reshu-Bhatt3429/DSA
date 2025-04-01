def first_occurrence():
    s = "hello world"
    char = "o"
    for i in range(len(s)):
        if s[i] == char:
            return i
    return -1
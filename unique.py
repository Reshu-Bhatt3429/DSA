 #Check if all characters in a string are unique
def all_chars_unique():
    s = "abcdefg"
    for i in range(len(s)):
        for j in range(i + 1, len(s)):
            if s[i] == s[j]:
                return False
    return True
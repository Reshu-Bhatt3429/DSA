def are_anagrams():
    str1 = "listen"
    str2 = "silent"
    if len(str1) != len(str2):
        return False
    sorted_str1 = ''.join(sorted(str1))
    sorted_str2 = ''.join(sorted(str2))
    return sorted_str1 == sorted_str2
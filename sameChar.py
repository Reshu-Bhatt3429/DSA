#Check if two strings have the same set of characters (ignoring order)
def same_set_of_chars():
    s1 = "triangle"
    s2 = "integral"
    return sorted(s1) == sorted(s2)
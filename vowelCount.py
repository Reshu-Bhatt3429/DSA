#Find the total number of vowels in a list of words
def count_vowels_in_words():
    words = ["apple", "banana", "cherry"]
    vowels = "aeiouAEIOU"
    count = 0
    for word in words:
        for char in word:
            if char in vowels:
                count += 1
    return count
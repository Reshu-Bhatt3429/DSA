#Problem: Check if a string has an equal number of vowels and consonants
def equal_vowels_and_consonants():
    s = "education"
    vowels = "aeiouAEIOU"
    vowel_count = 0
    consonant_count = 0
    for char in s:
        if char.isalpha():
            if char in vowels:
                vowel_count += 1
            else:
                consonant_count += 1
    return vowel_count == consonant_count
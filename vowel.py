def count_words_starting_with_vowel():
    sentence = "apple orange banana elephant igloo"
    vowels = "aeiouAEIOU"
    count = 0
    words = sentence.split()
    for word in words:
        if word[0] in vowels:
            count += 1
    return count
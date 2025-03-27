def longest_word():
    sentence = "The quick brown fox jumps over the lazy dog"
    words = sentence.split()
    longest = ""
    for word in words:
        if len(word) > len(longest):
            longest = word
    return longest
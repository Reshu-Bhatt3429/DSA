def count_long_words():
    sentence = "this is an example of a longer sentence"
    count = 0
    words = sentence.split()
    for word in words:
        if len(word) > 5:
            count += 1
    return count